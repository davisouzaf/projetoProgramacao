TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        cutbox.cpp \
        cutvoxel.cpp \
        figurageometrica.cpp \
        main.cpp \
        putbox.cpp \
        putsphere.cpp \
        putvoxel.cpp \
    cutsphere.cpp \
    putellipsoid.cpp \
    sculptor.cpp \
    cutellipsoid.cpp

HEADERS += \
    cutbox.h \
    cutvoxel.h \
    figurageometrica.h \
    putbox.h \
    putsphere.h \
    putvoxel.h \
    cutsphere.h \
    putellipsoid.h \
    sculptor.h \
    cutellipsoid.h
