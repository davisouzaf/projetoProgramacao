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
    ellispoiddialog.cpp \
        mainwindow.cpp \
    plotter.cpp \
    dimdialog.cpp \
    spheredialog.cpp \
    ../3dSculptor/cutbox.cpp \
    ../3dSculptor/cutellipsoid.cpp \
    ../3dSculptor/cutsphere.cpp \
    ../3dSculptor/cutvoxel.cpp \
    ../3dSculptor/figurageometrica.cpp \
    ../3dSculptor/putbox.cpp \
    ../3dSculptor/putellipsoid.cpp \
    ../3dSculptor/putsphere.cpp \
    ../3dSculptor/putvoxel.cpp

HEADERS  += mainwindow.h \
    boxdialog.h \
    ellispoiddialog.h \
    plotter.h \
    dimdialog.h \
    sculptor.h \
    spheredialog.h \
    ../3dSculptor/cutbox.h \
    ../3dSculptor/cutellipsoid.h \
    ../3dSculptor/cutsphere.h \
    ../3dSculptor/cutvoxel.h \
    ../3dSculptor/figurageometrica.h \
    ../3dSculptor/putbox.h \
    ../3dSculptor/putellipsoid.h \
    ../3dSculptor/putsphere.h \
    ../3dSculptor/putvoxel.h

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
