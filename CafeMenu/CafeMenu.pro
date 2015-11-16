#-------------------------------------------------
#
# Project created by QtCreator 2015-11-03T19:22:28
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = CafeMenu
CONFIG   += console + c++11
CONFIG   -= app_bundle

TEMPLATE = app



SOURCES += main.cpp \
    menu.cpp \
    menuitem.cpp \
    menunode.cpp \
    menuoutputer.cpp \
    climenuoutputer.cpp

greaterThan(QT_MAJOR_VERSION, 4){
CONFIG += c++14
} else {
QMAKE_CXXFLAGS += -std=c++14
}

HEADERS += \
    menu.h \
    menuitem.h \
    menunode.h \
    menuoutputer.h \
    climenuoutputer.h
