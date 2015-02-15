/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_status;
    QLineEdit *lineEdit_name;
    QPushButton *button_test;
    QGroupBox *groupBox_addCustomer;
    QPushButton *pushButton_addCustomer;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_newCustomer_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_newCustomer_nic;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_newCustomer_contact;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QToolButton *toolButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(946, 433);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_status = new QLabel(centralWidget);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(10, 370, 381, 16));
        label_status->setAutoFillBackground(false);
        label_status->setStyleSheet(QStringLiteral("background-color: rgb(255, 253, 190)"));
        lineEdit_name = new QLineEdit(centralWidget);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(32, 50, 131, 20));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_name->sizePolicy().hasHeightForWidth());
        lineEdit_name->setSizePolicy(sizePolicy);
        button_test = new QPushButton(centralWidget);
        button_test->setObjectName(QStringLiteral("button_test"));
        button_test->setGeometry(QRect(210, 50, 75, 23));
        groupBox_addCustomer = new QGroupBox(centralWidget);
        groupBox_addCustomer->setObjectName(QStringLiteral("groupBox_addCustomer"));
        groupBox_addCustomer->setGeometry(QRect(540, 20, 241, 161));
        pushButton_addCustomer = new QPushButton(groupBox_addCustomer);
        pushButton_addCustomer->setObjectName(QStringLiteral("pushButton_addCustomer"));
        pushButton_addCustomer->setGeometry(QRect(150, 120, 75, 23));
        layoutWidget = new QWidget(groupBox_addCustomer);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 195, 80));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_newCustomer_name = new QLineEdit(layoutWidget);
        lineEdit_newCustomer_name->setObjectName(QStringLiteral("lineEdit_newCustomer_name"));

        horizontalLayout->addWidget(lineEdit_newCustomer_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_newCustomer_nic = new QLineEdit(layoutWidget);
        lineEdit_newCustomer_nic->setObjectName(QStringLiteral("lineEdit_newCustomer_nic"));

        horizontalLayout_2->addWidget(lineEdit_newCustomer_nic);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_newCustomer_contact = new QLineEdit(layoutWidget);
        lineEdit_newCustomer_contact->setObjectName(QStringLiteral("lineEdit_newCustomer_contact"));

        horizontalLayout_3->addWidget(lineEdit_newCustomer_contact);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(540, 190, 241, 191));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 80, 221, 71));
        toolButton = new QToolButton(groupBox_3);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(140, 50, 71, 19));
        widget = new QWidget(groupBox_3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(21, 21, 190, 22));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_5->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_5->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_5->addWidget(lineEdit_5);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 160, 80, 23));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 50, 192, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);

        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(30, 20, 192, 22));
        horizontalLayout_6 = new QHBoxLayout(widget1);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lineEdit_6 = new QLineEdit(widget1);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_6->addWidget(lineEdit_6);

        layoutWidget->raise();
        groupBox_3->raise();
        label_5->raise();
        lineEdit_6->raise();
        pushButton->raise();
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 946, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_status->setText(QApplication::translate("MainWindow", "[+]status", 0));
        button_test->setText(QApplication::translate("MainWindow", "test", 0));
        groupBox_addCustomer->setTitle(QApplication::translate("MainWindow", "Add Customer", 0));
        pushButton_addCustomer->setText(QApplication::translate("MainWindow", "Add", 0));
        label->setText(QApplication::translate("MainWindow", "Name       :", 0));
        label_2->setText(QApplication::translate("MainWindow", "Nic no      :", 0));
        label_3->setText(QApplication::translate("MainWindow", "Contact   :", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Add Meter", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Unlock Codes", 0));
        toolButton->setText(QApplication::translate("MainWindow", "Edit", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Add", 0));
        label_4->setText(QApplication::translate("MainWindow", "Price        :", 0));
        label_5->setText(QApplication::translate("MainWindow", "ID            :", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
