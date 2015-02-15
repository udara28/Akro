#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QtSql/QSqlQuery>
#include <QSqlError>
#include <QResizeEvent>

#include "validator.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    bool dbStat = db.initDatabase();
    if(dbStat){
        ui->label_status->setText("Database Opened Successfully");
    }else{
        ui->label_status->setText("<font color=red>Failed to open database</font>");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button_test_clicked()
{
    qDebug() << "clicked";
    QSqlQuery query;
    query.exec("SELECT name FROM customer");
    while(query.next()){
        qDebug() << query.value(0).toString();
        ui->lineEdit_name->setText(query.value(0).toString());
    }
}

void MainWindow::on_pushButton_addCustomer_clicked()
{
    QLineEdit *name = ui->lineEdit_newCustomer_name;
    QLineEdit *nic = ui->lineEdit_newCustomer_nic;
    QLineEdit *contact = ui->lineEdit_newCustomer_contact;

    Validator v;
    bool input = v.validateAddCustomer(name,nic,contact);

    if(input){
        QSqlQuery querry;
        querry.prepare("INSERT INTO customer(name,nic,contact) VALUES(:name,:nic,:contact)");
        querry.bindValue(":name",name->text());
        querry.bindValue(":nic",nic->text());
        querry.bindValue(":contact",contact->text());
        bool stat = querry.exec();
        if(stat){
            ui->label_status->setText("Customer added successfully");
        }else{
            ui->label_status->setText(querry.lastError().text());
        }
    }else{
        ui->label_status->setText("<font color=red>Failed to add customer</font>");
    }
}

void MainWindow::resizeEvent ( QResizeEvent * event )
{
    QRect box;
    box = ui->groupBox_addCustomer->geometry();

    qDebug() << ui->centralWidget->width();
    box.setX(ui->centralWidget->width() - 200);
    ui->groupBox_addCustomer->setGeometry(box);
    repaint();
}
