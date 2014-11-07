#-------------------------------------------------
#
# Project created by QtCreator 2014-11-07T09:24:24
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = akro
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    database.cpp \
    addcustomer.cpp \
    validator.cpp

HEADERS  += mainwindow.h \
    database.h \
    addcustomer.h \
    validator.h

FORMS    += mainwindow.ui \
    addcustomer.ui
