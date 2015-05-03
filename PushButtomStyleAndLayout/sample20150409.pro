#-------------------------------------------------
#
# Project created by QtCreator 2015-04-09T13:56:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sample20150409
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    kspushbutton.cpp \
    FiSK_PushButton.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    kspushbutton.h \
    FiSK_PushButton.h \
    dialog.h

FORMS    += mainwindow.ui \
    dialog.ui

RESOURCES += \
    imageresources.qrc
