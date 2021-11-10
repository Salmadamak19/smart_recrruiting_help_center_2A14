#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
//main programme principale
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;
    bool test=c.createconnect();//appel de la methode createconnexion
     MainWindow w;//interface graphique
    if(test)//si la connexion est etabli
    {
        w.show();//si elle a retourner true donc je vais afficher ce message
        //message pour la connection
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



    return a.exec();
}
