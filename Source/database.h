#ifndef DATABASE_H
#define DATABASE_H
#include <QSqlQuery>
#include <QString>
#include <QCoreApplication>
#include <QString>
#include <QVariant>

class DataBase
{
public:
    DataBase();
    void Disconnect_db();
    QSqlDatabase db;
    ~DataBase();

};

#endif // DATABASE_H
