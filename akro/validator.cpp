#include "validator.h"

#include <QLineEdit>
#include <QDebug>

Validator::Validator()
{
}

bool Validator::nameValidate(QLineEdit *line){
    if(line->text().isEmpty()){
        line->setStyleSheet("QLineEdit{background-color:lightsalmon}");
        return false;
    }else{
        line->setStyleSheet("QLineEdit{background:white}");
        return true;
    }
}

bool Validator::nicValidate(QLineEdit *line){
    QString nic = line->text();
    if( nic.length() != 10 || nic.right(1).toLower() != "v"){
        line->setStyleSheet("QLineEdit{background-color:lightsalmon}");
        return false;
    }else{
        line->setStyleSheet("QLineEdit{background-color:white}");
        return true;
    }
}

bool Validator::validateAddCustomer(QLineEdit *lineName,QLineEdit *lineNic,QLineEdit *lineContact)
{
    bool h = nameValidate(lineName);
    if(h) h = nicValidate(lineNic);
    return h;
}
