QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = calc
TEMPLATE = app
QT += widgets

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
