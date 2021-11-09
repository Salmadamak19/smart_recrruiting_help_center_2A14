#ifndef FORMATION_H
#define FORMATION_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Matriel
{
public:
   Matriel();//constructeur par defauts
   Matriel(int,QString,QString,QString,QString,QString,int,int);//constructeur parametree
   //getters
    int get_id();
    QString get_nom();
    QString get_reference();
    QString get_marque();
    QString get_etat();
    QString get_mail();
    int get_miseFab();
    int get_miseFonc();
    //setters
    void  setid(int);
    void  set_nom(QString);
    void  set_reference(QString);
    void  set_marque(QString);
    void  set_etat(QString);
    void  set_mail(QString);
    void  set_miseFab(int);
    void  set_miseFonc(int);

//les methodes
    bool ajouter();//elle va retourner soit le true soit le false
    QSqlQueryModel* afficher();
    bool supprimer(int);

//les methodes
private:
    QString nom,reference,marque,etat,mail;
    int id,miseFab,miseFonc;
};

#endif // FORMATION_H
