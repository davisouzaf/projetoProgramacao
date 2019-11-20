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
    Sculptor.cpp \
    boxdialog.cpp \
    cutbox.cpp \
    cutellipsoid.cpp \
    cutsphere.cpp \
    cutvoxel.cpp \
    ellipsoiddialog.cpp \
    figurageometrica.cpp \
        mainwindow.cpp \
    plotter.cpp \
    dimdialog.cpp \
    putbox.cpp \
    putellipsoid.cpp \
    putsphere.cpp \
    putvoxel.cpp \
    spheredialog.cpp

HEADERS  += mainwindow.h \
    boxdialog.h \
    cutbox.h \
    cutellipsoid.h \
    cutsphere.h \
    cutvoxel.h \
    ellipsoiddialog.h \
    figurageometrica.h \
    plotter.h \
    dimdialog.h \
    putbox.h \
    putellipsoid.h \
    putsphere.h \
    putvoxel.h \
    sculptor.h \
    spheredialog.h

FORMS    += mainwindow.ui \
    boxdialog.ui \
    dimdialog.ui \
    ellipsoiddialog.ui \
    spheredialog.ui

RESOURCES += \
    cube.qrc

DISTFILES +=

SUBDIRS += \
    ../../Downloads/projetoProgramacao-master/3dSculptor/3dSculptor.pro
