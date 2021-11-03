#ifndef FORMATION_H
#define FORMATION_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class Formation
{public:
    Formation();
    Formation(QString,QString,QString,int,QString);
    QString  get_code_formation();
    QString get_nom_for();
    QString get_nom_encadreur();
    int get_dure_for();
    QString get_type_for();

    void  setcode_formation(QString);

    void  setnom_for(QString);
    void  setnom_encadreur(QString);
    void  setdure_for( int);
    void  settype_for(QString);

    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);

private:
    QString code_formation,nom_for,nom_encadreur,type_for;
    int dure_for;
};

#endif // FORMATION_H
