#-------------------------------------------------
#
# Project created by QtCreator 2015-10-05T11:03:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RPSLS
TEMPLATE = app


SOURCES += main.cpp\
        homescreen.cpp \
    cli.cpp \
    rpsls_core.cpp

HEADERS  += homescreen.h \
    cli.h \
    rpsls_core.h

FORMS    += homescreen.ui
