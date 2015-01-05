#-------------------------------------------------
#
# Project created by QtCreator 2014-12-12T16:53:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MonPaint
TEMPLATE = app



INCLUDEPATH += C:\opencv\build\include

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui


LIBS +=  -LC:\opencv\build\x86\vc10\lib
LIBS += -lopencv_calib3d2410 \
            -lopencv_contrib2410 \
            -lopencv_core2410 \
            -lopencv_features2d2410 \
            -lopencv_flann2410 \
            -lopencv_gpu2410 \
            -lopencv_haartraining_engine \
            -lopencv_highgui2410 \
            -lopencv_imgproc2410 \
            -lopencv_legacy2410 \
            -lopencv_ml2410 \
            -lopencv_objdetect2410 \
            -lopencv_ts2410 \
            -lopencv_video2410
