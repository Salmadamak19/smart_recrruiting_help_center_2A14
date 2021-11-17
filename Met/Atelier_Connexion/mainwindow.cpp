#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "formation.h"
#include <QMessageBox>
#include <QDebug>
#include <QIntValidator>
#include "QrCode.hpp"

using namespace qrcodegen;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->tab_for->setModel(Etmp.afficher()); // UPDATE ECRAN D'AFFICHAGEE

    ui->CODE_FORMATION->setMaxLength(12); //FORMATAGE D'AFFICHAGE
    ui->NOM_ENCADREUR->setMaxLength(20);
    ui->NOM_FOR->setMaxLength(20);
    ui->TYPE_FOR->setMaxLength(12);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonAjouter_clicked()
{
    QString  code_formation=ui->CODE_FORMATION->text();
    int dure_for=ui->DURE_FOR->text().toInt();
    QString nom_for=ui->NOM_FOR->text();
   QString nom_encadreur=ui->NOM_ENCADREUR->text();
   QString type_for=ui->TYPE_FOR->text();



    Formation f(code_formation,nom_for,nom_encadreur,dure_for,type_for);
bool test=f.ajouter();
if (test)
        { //Actualiser
     ui->tab_for->setModel(Etmp.afficher());
        QMessageBox:: information(nullptr, QObject::tr("OK"),
                                           QObject::tr("Ajout effectué\n"
                                                       "click cancel to exit."),QMessageBox::Cancel);
        }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Ajout non effectué.\n"
                                          "click Cancel to exit."),QMessageBox::Cancel);
}


void MainWindow::on_supp_clicked()
{
    Formation f1;
   // f1.setcode_formation(ui->code_supp->text());
     //bool test=Etmp.supprimer(f1.get_code_formation());

    QString code_for=ui->code_supp->text();
    bool test=Etmp.supprimer(code_for);

    QMessageBox msgBox;
        if (test)
                {
            //actualiser
             ui->tab_for->setModel(Etmp.afficher());
                QMessageBox:: information(nullptr, QObject::tr("OK"),
                                                   QObject::tr("Suppression effectué\n"
                                                               "click cancel to exit."),QMessageBox::Cancel);
                }
            else
            ui->tab_for->setModel(Etmp.afficher());
                QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                                      QObject::tr("Suppression non effectué.\n"
                                                  "click Cancel to exit."),QMessageBox::Cancel);

}

void MainWindow::on_Mod_2_clicked()
{
    QString  code_formation=ui->CODE_FORMATION->text();
    int dure_for=ui->DURE_FOR->text().toInt();
    QString nom_for=ui->NOM_FOR->text();
   QString nom_encadreur=ui->NOM_ENCADREUR->text();
   QString type_for=ui->TYPE_FOR->text();
          Formation f(code_formation,nom_for,nom_encadreur,dure_for,type_for);
          bool test=f.modifier(code_formation,nom_for,nom_encadreur,type_for,dure_for);
          if (test)
                  { //Actualiser
               ui->tab_for->setModel(Etmp.afficher());
                  QMessageBox:: information(nullptr, QObject::tr("OK"),
                                                     QObject::tr("modification effectué\n"
                                                                 "click cancel to exit."),QMessageBox::Cancel);
                  }
              else
                  QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                                        QObject::tr("modification non effectué.\n"
                                                    "click Cancel to exit."),QMessageBox::Cancel);
 }


void MainWindow::on_rechercher_button_clicked()
{
    QString rech =ui->code_supp->text();
        ui->tab_for->setModel(Etmp.rechercher(rech));
}

void MainWindow::on_qrcodegen_clicked()
{
    int tabeq=ui->tab_for->currentIndex().row();
           QVariant idd=ui->tab_for->model()->data(ui->tab_for->model()->index(tabeq,0));
           QString id= idd.toString();
           QSqlQuery qry;
           qry.prepare("select * from Formation where CODE_FORMATION=:id");
           qry.bindValue(":CODE_FORMATION",id);
           qry.exec();
              QString  iden,nom_for,nom_encadreur,type_for,dure_for,ide;

           while(qry.next()){

               id=qry.value(1).toString();
               nom_for=qry.value(2).toString();
               nom_encadreur=qry.value(3).toString();
               type_for=qry.value(4).toString();
               dure_for=qry.value(5).toString();


           }
           ide=QString(id);
                  ide="CODE_FORMATION:"+ide+"NOM_FOR:"+iden+"NOM_ENCADREUR:"+nom_encadreur+"TYPE_FOR:"+type_for,"DURE_FOR:"+dure_for;
           QrCode qr = QrCode::encodeText(ide.toUtf8().constData(), QrCode::Ecc::HIGH);

           // Read the black & white pixels
           QImage im(qr.getSize(),qr.getSize(), QImage::Format_RGB888);
           for (int y = 0; y < qr.getSize(); y++) {
               for (int x = 0; x < qr.getSize(); x++) {
                   int color = qr.getModule(x, y);  // 0 for white, 1 for black

                   // You need to modify this part
                   if(color==0)
                       im.setPixel(x, y,qRgb(254, 254, 254));
                   else
                       im.setPixel(x, y,qRgb(0, 0, 0));
               }
           }
           im=im.scaled(200,200);
           ui->qrcodecommande->setPixmap(QPixmap::fromImage(im));

}


