#include "database.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

DataBase::DataBase()
{

}

bool DataBase::initDatabase()
{
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:\\Users\\HP\\Documents\\GitHub\\Akro\\DB\\akro.sqlite");
    return database.open();
}

DataBase::~DataBase()
{
    if(database.isOpen()){
        database.close();
    }
}

