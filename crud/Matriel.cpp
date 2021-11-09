#include "Matriel.h"
#include<QSqlQueryModel>
#include<QtDebug>
#include<QObject>
//constructeur par defaut
Matriel::Matriel()
{
id=0;
nom="";
reference="";
marque="";
etat="";
mail="";
miseFab=0;
miseFonc=0;
}

//parametree
Matriel::Matriel(int id_m,QString nom_m,QString reference_m,QString marque_m,QString etat_m,QString mail_m ,int miseFab_m,int miseFonc_m)
{
    this->id=id_m;
    this->nom=nom_m;
    this-> reference=reference_m;
    this->marque=marque_m;
    this->etat=etat_m;
    this->mail=mail_m;
    this->miseFab=miseFab_m;
    this->miseFonc=miseFonc_m;

}

int Matriel::get_id(){return id;}//khedmt get
QString Matriel::get_nom(){return  nom;}
QString Matriel::get_reference(){return reference;}
QString Matriel::get_marque(){return marque;}
QString Matriel::get_etat(){return etat;}
QString Matriel::get_mail(){return mail;}
int Matriel::get_miseFab(){return miseFab;}
int Matriel::get_miseFonc(){return miseFonc;}

void  Matriel::setid(int id) {this->id=id;}//khedma taae set bch njmo naytulha ll fichier lokhryn khtrhm prive
void  Matriel::set_nom(QString nom ){this->nom=nom;}
void  Matriel::set_reference(QString reference){this->reference=reference;}
void  Matriel::set_marque(QString marque){this->marque=marque;}
void  Matriel::set_etat(QString etat) {this->etat=etat;}
void  Matriel::set_mail(QString mail) {this->mail=mail;}
void  Matriel::set_miseFab(int miseFab) {this->miseFab=miseFab;}
void  Matriel::set_miseFonc(int miseFonc) {this->miseFab=miseFonc;}


//ajouter dans la base de donnee
bool Matriel::ajouter()
{
QSqlQuery query;
QString IDstring=QString::number(id);
QString MISE_FABstring=QString::number(miseFab);
QString MISE_FONCstring=QString::number(miseFonc);
query.prepare("INSERT INTO MATRIEL (ID,NOM,REFERENCE,MARQUE,ETAT,MAIL,MISE_FAB,MISE_FONC) "
                    "VALUES (:ID, :NOM, :REFERENCE,:MARQUE,:ETAT,:MAIL,:MISE_FAB,:MISE_FONC)");
query.bindValue(":ID",id);
query.bindValue(" :NOM",nom);

query.bindValue(":REFERENCE",reference);
query.bindValue(":MARQUE",marque);
query.bindValue(":ETAT",etat );
query.bindValue(":MAIL",mail );
query.bindValue(":MISE_FAB",miseFab);
query.bindValue(":MISE_FONC",miseFonc);
  return query.exec();
}



//afficher dans la base de donnee
QSqlQueryModel* Matriel::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select* from MATRIEL");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("REFERENCE"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("MARQUE"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("ETAT "));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("MAIL_FOURNISSEUR "));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("MISE_FABRICATION"));
model->setHeaderData(7, Qt::Horizontal, QObject::tr("MISE_FONCTION"));
    return model;
}



//supprimer dans la base de donne
bool Matriel::supprimer(int id )
{
QSqlQuery query;
query.prepare("Delete from MATRIEL where ID = :id ");//table matriel
query.bindValue(0, id);
return    query.exec();
}


