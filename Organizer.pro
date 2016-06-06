#-------------------------------------------------
#
# Project created by QtCreator 2016-06-04T03:37:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Organizer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dochody.cpp \
    prognoza.cpp \
    zobowiazania.cpp

HEADERS  += mainwindow.h \
    dochody.h \
    prognoza.h \
    zobowiazania.h

FORMS    += \
    mainwindow.ui \
    dochody.ui \
    prognoza.ui \
    zobowiazania.ui
