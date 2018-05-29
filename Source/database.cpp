#include "database.h"

DataBase::DataBase()
{
    //path is defined by the location of the .exe file + the name of the database
    QString path = QCoreApplication::applicationDirPath();
    path = path + "/Tool_resources.sqlite";
    //opens the database if it doesn't exist
    if(!QSqlDatabase::contains("MyDB")){
    db = QSqlDatabase::addDatabase("QSQLITE","MyDB");
    db.setDatabaseName(path);
    }
    db.open();
}

void DataBase::Disconnect_db(){
    //closes the database
    db.close();
}
DataBase::~DataBase()
{
    DataBase::Disconnect_db();
}
