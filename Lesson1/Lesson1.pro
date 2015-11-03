TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    testclass.cpp \
    block.cpp

# With C++11 support
greaterThan(QT_MAJOR_VERSION, 4){
CONFIG += c++14
} else {
QMAKE_CXXFLAGS += -std=c++14
}

HEADERS += \
    testclass.h \
    block.h
