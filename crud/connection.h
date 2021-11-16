#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
//connection de base de donne
class Connection
{
public:
    Connection();
    bool createconnect();
};

#endif // CONNECTION_H
