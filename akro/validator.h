#ifndef VALIDATOR_H
#define VALIDATOR_H

class QLineEdit;

class Validator
{
public:
    Validator();
    bool validateAddCustomer(QLineEdit *lineName,QLineEdit *lineNic,QLineEdit *lineContact);

private:
    bool nameValidate(QLineEdit * line);
    bool nicValidate(QLineEdit * line);
    bool contactValidate(QLineEdit * line);
};

#endif // VALIDATOR_H
