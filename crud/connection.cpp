#include "connection.h"

Connection::Connection()
{

}
//la connection de bd
bool Connection::createconnect()
{
   bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test-bd");//inserer le nom de la source de données ODBC
db.setUserName("rim2");//inserer nom de l'utilisateur
db.setPassword("rim2");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
