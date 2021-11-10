#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Matriel.h"
#include <QMessageBox>
#include <QDebug>
#include <QIntValidator>
#include <QDateEdit>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);//
    ui->id->setValidator(new QIntValidator (0, 9999999, this));//controle de saisie sur id pour inserer des entiers
    ui->tab_mat->setModel(Mat.afficher());//affichage de tableau
}

//ajouter
void MainWindow::on_pushButtonAjouter_clicked()
{

   int id=ui->id->text().toInt();//convertir l id de chaine de car vers un entier w baaed thutha
   QString nom=ui->nom->text();
   QString reference =ui->reference->text();
   QString marque=ui->marque->text();
   QString etat=ui->etat->text();
   QString mail=ui->mail->text();
   QDate miseFab=ui->miseFab->date();
   QDate miseFonc=ui->miseFonc->date();



    Matriel m(id,nom,reference,marque,etat,mail,miseFab,miseFonc);
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

 //actualiser
           ui->tab_mat->setModel(Mat.afficher());
        }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Suppression non effectué.\n"
                                          "click Cancel to exit."),QMessageBox::Cancel);

}

//modifier

void MainWindow::on_modifier_clicked()
{
    int id=ui->id->text().toInt();
    QString nom=ui->nom->text();
    QString reference=ui->reference->text();
    QString marque=ui->marque->text();
    QString etat=ui->etat->text();//etat boutoon dans maquette bech njm nktb f maquette zeda
    QString mail=ui->mail->text();
    QDate miseFab=ui->miseFab->date();
    QDate miseFonc=ui->miseFonc->date();


        Matriel m(id,nom,reference,marque,etat,mail,miseFab,miseFonc);
        bool test=m.modifier(id,nom,reference,marque,etat,mail,miseFab,miseFonc);//modifier  wahda meli f woset
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

    QString reference_M =ui->rech_id->text();
       ui->tab_mat->setModel(Mat.rechercher_id(reference_M));


}
MainWindow::~MainWindow()
{
    delete ui;
}
