/********************************************************************************
** Form generated from reading UI file 'addcustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCUSTOMER_H
#define UI_ADDCUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_addCustomer
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *addCustomer)
    {
        if (addCustomer->objectName().isEmpty())
            addCustomer->setObjectName(QStringLiteral("addCustomer"));
        addCustomer->resize(400, 300);
        buttonBox = new QDialogButtonBox(addCustomer);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(addCustomer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 60, 51, 16));
        label_2 = new QLabel(addCustomer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 100, 51, 16));
        label_3 = new QLabel(addCustomer);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 140, 51, 16));

        retranslateUi(addCustomer);
        QObject::connect(buttonBox, SIGNAL(accepted()), addCustomer, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addCustomer, SLOT(reject()));

        QMetaObject::connectSlotsByName(addCustomer);
    } // setupUi

    void retranslateUi(QDialog *addCustomer)
    {
        addCustomer->setWindowTitle(QApplication::translate("addCustomer", "Dialog", 0));
        label->setText(QApplication::translate("addCustomer", "Name      :", 0));
        label_2->setText(QApplication::translate("addCustomer", "NIC no    :", 0));
        label_3->setText(QApplication::translate("addCustomer", "Contact  :", 0));
    } // retranslateUi

};

namespace Ui {
    class addCustomer: public Ui_addCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCUSTOMER_H
