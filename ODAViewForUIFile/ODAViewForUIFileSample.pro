#-------------------------------------------------
#
# Project created by QtCreator 2015-04-01T14:54:17
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ODAViewForUIFileSample
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    dialog2.cpp \
    dialog3.cpp \
    dialogsample.cpp \
    ksfisk_basedialog.cpp \
    ksfisk_dragtomovewndutils.cpp \
    dialog4.cpp \
    dialogsample2.cpp \
    dialogbutton.cpp \
    dialog5.cpp \
    dialog6.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    dialog2.h \
    dialog3.h \
    dialogsample.h \
    ksfisk_basedialog.h \
    ksfisk_dragtomovewndutils.h \
    dialog4.h \
    dialogsample2.h \
    dialogbutton.h \
    dialog5.h \
    dialog6.h \
    imagestrings.h

FORMS    += mainwindow.ui \
    dialog.ui \
    dialog2.ui \
    dialog3.ui \
    dialogsample.ui \
    dialog4.ui \
    dialogsample2.ui \
    dialog5.ui \
    dialog6.ui

RESOURCES += \
    iconimages.qrc

DISTFILES += \
    resources/images/show_h_255_128_0.png \
    resources/images/show_v_255_128_0.png
