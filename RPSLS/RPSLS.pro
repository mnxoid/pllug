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
    rpsls_core.cpp \
    util.cpp \
    windowmanager.cpp \
    aboutwindow.cpp \
    gamescreen.cpp

HEADERS  += homescreen.h \
    cli.h \
    rpsls_core.h \
    util.h \
    windowmanager.h \
    aboutwindow.h \
    gamescreen.h

FORMS    += homescreen.ui \
    aboutwindow.ui \
    gamescreen.ui

OTHER_FILES +=

RESOURCES += \
    Resources.qrc

# With C++11 support
greaterThan(QT_MAJOR_VERSION, 4){
CONFIG += c++11
} else {
QMAKE_CXXFLAGS += -std=c++0x
}
