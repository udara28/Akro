#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "database.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_button_test_clicked();

    void on_pushButton_addCustomer_clicked();

private:
    Ui::MainWindow *ui;
    DataBase db;
};

#endif // MAINWINDOW_H
