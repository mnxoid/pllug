#-------------------------------------------------
#
# Project created by QtCreator 2015-10-20T17:50:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CircularApp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    circularlayout.cpp

# With C++11 support
greaterThan(QT_MAJOR_VERSION, 4){
CONFIG += c++14
} else {
QMAKE_CXXFLAGS += -std=c++14
}

HEADERS  += mainwindow.h \
    circularlayout.h

FORMS    += mainwindow.ui
