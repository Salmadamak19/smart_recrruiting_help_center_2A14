#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Matriel.h"
#include <QMessageBox>
#include <QDebug>
#include <QIntValidator>
#include <QDateEdit>
#include <QComboBox>
#include "smtp.h"
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
#include<QTextStream>

using namespace QtCharts;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //CONTROLE DE SAISIE
    ui->id->setValidator(new QIntValidator (0, 99999999, this));
  //quantite
    ui->nom->setValidator(new QRegExpValidator (QRegExp("[a-z-A-Z]+"),this));//nom
    ui->reference->setValidator(new QRegExpValidator (QRegExp("[a-z-A-Z]+"),this));//reference
    ui->mail->setValidator(new QRegExpValidator(QRegExp("\\b[a-z0-9._%+-]+@[a-z0-9.-]+\\.[a-z]{2,4}\\b")));//mail

    //COMBO BOX marque
    ui->marque->addItem(QIcon("//ken nheb nhut taswira"),"Brother");
    ui->marque->addItem("HP");
    ui->marque->addItem("MACOS");
    ui->marque->addItem("Asus");
    ui->marque->addItem("Samsung");







//pour le remplir de tableau dans l iterface graphique
    ui->tab_mat->setModel(Mat.afficher());




}







//ajouter
void MainWindow::on_pushButtonAjouter_clicked()
{

   int id=ui->id->text().toInt();//convertir l id de chaine de car vers un entier w baaed thutha
   QString nom=ui->nom->text();
   QString reference =ui->reference->text();
   QString marque=ui->marque->currentText();


   QString etat=ui->etat->text();
int quantite=ui->quantite_2->text().toInt();
   QString mail=ui->mail->text();
   QDate miseFab=ui->miseFab->date();
   QDate miseFonc=ui->miseFonc->date();



    Matriel m(id,nom,reference,marque,etat,quantite,mail,miseFab,miseFonc);
bool test=m.ajouter();//test de ajouter
if (test)
        {
    //Actualiser de l affichage
     ui->tab_mat->setModel(Mat.afficher());
        QMessageBox:: information(nullptr, QObject::tr("OK"),
                                           QObject::tr("Ajout effectué\n"
                                                       "click cancel to exit."),QMessageBox::Cancel);
        }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Ajout non effectué.\n"
                                          "click Cancel to exit."),QMessageBox::Cancel);
}







//supprimer
void MainWindow::on_supp_clicked()
{
    int id=ui->id_supp->text().toInt();//ajout ta3 id f id_supp

bool test =Mat.supprimer(id);//supprimer selon l id
//QMessageBox msgBox;
if (test)
        {


        QMessageBox:: information(nullptr, QObject::tr("OK"),
                                           QObject::tr("Suppression effectué\n"
                                                       "click cancel to exit."),QMessageBox::Cancel);

 //ken tfskht bch ysir refresh de mon tableau
           ui->tab_mat->setModel(Mat.afficher());
        }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Suppression non effectué.\n"
                                          "click Cancel to exit."),QMessageBox::Cancel);

}

/*//refresh
void Matriel::refresh(){
ui->tab_->setModel(tmprdv.afficher());
ui->comboBox_2->setModel(tmprdv.afficherlist());
ui->comboBox_3->setModel(tmprdv.afficherlist());
ui->tabetudiant_2->setModel(tmprdv1.afficher());
ui->comboBox->setModel(tmprdv1.afficherlist());
ui->comboBox_4->setModel(tmprdv1.afficherlist());
ui->id_combobox->setModel(tmprdv1.GetIdModelFournisseur());
ui->combo_id->setModel(tmprdv1.GetIdModelFournisseur());
}
*/



//modifier

void MainWindow::on_modifier_clicked()
{
    int id=ui->id->text().toInt();
    QString nom=ui->nom->text();
    QString reference=ui->reference->text();
    QString marque=ui->marque->currentText();
    QString etat=ui->etat->text();
     int quantite=ui->quantite_2->text().toInt();
    QString mail=ui->mail->text();
    QDate miseFab=ui->miseFab->date();
    QDate miseFonc=ui->miseFonc->date();


        Matriel m(id,nom,reference,marque,etat,quantite,mail,miseFab,miseFonc);
        bool test=m.modifier(id,nom,reference,marque,etat,quantite,mail,miseFab,miseFonc);
    if (test)
    {
        //actualiser

        ui->tab_mat->setModel(Mat.afficher());



        QMessageBox::information(nullptr, QObject::tr("modifier une agence"),
                          QObject::tr("Matériel modifié.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

        }

          else
              QMessageBox::critical(nullptr, QObject::tr("modifier un matériel"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

    }



void MainWindow::on_recherche_clicked()
{

    QString reference =ui->rech->text();
    QString mail =ui->rech->text();
    QString marque =ui->rech->text();
       ui->tab_mat->setModel(Mat.rechercher(reference));

       ui->tab_mat->setModel(Mat.rechercher1(mail));
       ui->tab_mat->setModel(Mat.rechercher2(marque));


}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_stat_clicked()
{
    QSqlQueryModel * model= new QSqlQueryModel();

         model->setQuery("select * from MATRIEL where MARQUE='Brother' ");
         int number1=model->rowCount();
         model->setQuery("select * from MATRIEL where MARQUE='HP' ");
         int number2=model->rowCount();
         model->setQuery("select * from MATRIEL where MARQUE=' Samsung' ");
         int number3=model->rowCount(); // calculer le nombre de voyage pour hammem lif
         model->setQuery("select * from MATRIEL where MARQUE=' MACOS' ");
         int number4=model->rowCount();
         model->setQuery("select * from MATRIEL where MARQUE=' Asus' ");
         int number5=model->rowCount();


         int total=number1+number2+number3+number4+number5;
         QString a = QString("brother  "+QString::number((number1*100)/total,'f',2)+"%" );
         QString b = QString("HP "+QString::number((number2*100)/total,'f',2)+"%" );
         QString c = QString(" samsung "+QString::number((number3*100)/total,'f',2)+"%" );
         QString d = QString(" MACOS "+QString::number((number4*100)/total,'f',2)+"%" );
         QString e = QString(" Asus "+QString::number((number5*100)/total,'f',2)+"%" );

         QPieSeries *series = new QPieSeries();
         series->append(a,number1);
         series->append(b,number2);
         series->append(c,number3);
          series->append(d,number4);
           series->append(e,number5);

         if (number1!= 0)
         {
             QPieSlice *slice = series->slices().at(0);
             slice->setLabelVisible();
             slice->setPen(QPen());
         }
         if (number2!=0)
         {
                  // Add label, explode and define brush for 2nd slice
                  QPieSlice *slice1 = series->slices().at(1);
                  //slice1->setExploded();
                  slice1->setLabelVisible();
         }
         if(number3!=0)
         {
                  // Add labels to rest of slices
                  QPieSlice *slice2 = series->slices().at(2);
                  //slice1->setExploded();
                  slice2->setLabelVisible();
         }
         if(number4!=0)
         {
                  // Add labels to rest of slices
                  QPieSlice *slice3 = series->slices().at(3);
                  //slice1->setExploded();
                  slice3->setLabelVisible();
         }
         if(number5!=0)
         {
                  // Add labels to rest of slices
                  QPieSlice *slice4 = series->slices().at(4);
                  //slice1->setExploded();
                  slice4->setLabelVisible();
         }


                 // Create the chart widget
                 QChart *chart = new QChart();
                 // Add data to chart with title and hide legend
                 chart->addSeries(series);
                 chart->setTitle("Pourcentage Par MARQUE :Nombre Des quantite de marque "+ QString::number(total));
                 chart->legend()->hide();
                 // Used to display the chart
                 QChartView *chartView = new QChartView(chart);
                 chartView->setRenderHint(QPainter::Antialiasing);
                 chartView->resize(1000,1000);
                 chartView->show();

    }

void MainWindow::sendMail()
{
    Smtp* smtp = new Smtp(ui->uname->text(), ui->paswd->text(), ui->server->text(), ui->port->text().toUShort());
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));


    smtp->sendMail(ui->uname->text(), ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}

void MainWindow::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}

/*
void MainWindow::on_sendMail_clicked()
{

    connect(ui->sendMail, SIGNAL(clicked()),this, SLOT(sendMail()));
}
*/
