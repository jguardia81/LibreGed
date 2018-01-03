include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11

CONFIG += thread
CONFIG -= qt

HEADERS +=     tst_testcontextlib.h

SOURCES +=     main.cpp

unix:!macx: LIBS += -L$$OUT_PWD/../contextLib/ -lcontextLib

INCLUDEPATH += $$PWD/../contextLib
DEPENDPATH += $$PWD/../contextLib
