#-------------------------------------------------
#
# Project created by QtCreator 2019-11-08T18:08:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = projeto
TEMPLATE = app


SOURCES += main.cpp\
    boxdialog.cpp \
    ellispoiddialog.cpp \
        mainwindow.cpp \
    plotter.cpp \
    dimdialog.cpp \
    spheredialog.cpp

HEADERS  += mainwindow.h \
    boxdialog.h \
    ellispoiddialog.h \
    plotter.h \
    dimdialog.h \
    spheredialog.h

FORMS    += mainwindow.ui \
    boxdialog.ui \
    dimdialog.ui \
    ellispoiddialog.ui \
    spheredialog.ui

RESOURCES += \
    cube.qrc

DISTFILES +=

SUBDIRS += \
    ../../Downloads/projetoProgramacao-master/3dSculptor/3dSculptor.pro
