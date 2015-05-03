#-------------------------------------------------
#
# Project created by QtCreator 2015-04-03T14:28:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TableSample
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog1.cpp \
    dialog2.cpp \
    dialog3.cpp

HEADERS  += mainwindow.h \
    dialog1.h \
    dialog2.h \
    dialog3.h

FORMS    += mainwindow.ui \
    dialog1.ui \
    dialog2.ui \
    dialog3.ui

RESOURCES += \
    resources/imageresources.qrc
