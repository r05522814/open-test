#-------------------------------------------------
#
# Project created by QtCreator 2016-10-02T14:44:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = opencv_test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h

FORMS    += mainwindow.ui

##for OpenCV
INCLUDEPATH += D:/opencv_310/build/include\
                D:/opencv_310/build/include/opencv\
                D:/opencv_310/build/include/opencv2

LIBS += D:/opencv_310/build/x64/vc14/lib/opencv_world310.lib\
        D:/opencv_310/build/x64/vc14/lib/opencv_world310d.lib
