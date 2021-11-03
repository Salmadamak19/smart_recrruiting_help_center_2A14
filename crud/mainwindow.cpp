#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "formation.h"
#include <QMessageBox>
#include <QDebug>
#include <QIntValidator>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tab_for->setModel(Etmp.afficher());

    //exeples
/*ui->CIN->setValidator(new QIntValidator(0,99999999,this));
ui->NUMTEL->setValidator(new QIntValidator(0,99999999,this));
ui->NBRJOURS->setValidator(new QIntValidator(0,31,this));
*/
}


void MainWindow::on_pushButtonAjouter_clicked()
{
    QString  code_formation=ui->CODE_FORMATION->text();
    int dure_for=ui->DURE_FOR->text().toInt();
    QString nom_for=ui->NOM_FOR->text();
   QString nom_encadreur=ui->NOM_ENCADREUR->text();
   QString type_for=ui->TYPE_FOR->text();
   /* int numtel=ui->NUMTEL->text().toInt();
    QString adresse=ui->ADRESSE->text();
    QString dateres=ui->DATERES->text();
    int nbrjours=ui->NBRJOURS->text().toInt();*/


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


void MainWindow::on_code_supp_clicked()
{
    Formation f1;
    f1.setcode_formation(ui->code_supp->text());
        bool test=Etmp.supprimer(f1.get_code_formation());
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
                QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                                      QObject::tr("Suppression non effectué.\n"
                                                  "click Cancel to exit."),QMessageBox::Cancel);

}

MainWindow::~MainWindow()
{
    delete ui;
}
