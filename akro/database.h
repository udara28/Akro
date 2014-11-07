#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql/QSqlDatabase>

class QString;

class DataBase
{
public:
    DataBase();
    bool initDatabase();
    //bool execute(QString query);
    ~DataBase();

private:
    QSqlDatabase database;
};

#endif // DATABASE_H
