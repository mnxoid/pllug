#-------------------------------------------------
#
# Project created by QtCreator 2015-11-03T18:18:59
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = PllugTest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp

greaterThan(QT_MAJOR_VERSION, 4){
CONFIG += c++14
} else {
QMAKE_CXXFLAGS += -std=c++14
}
