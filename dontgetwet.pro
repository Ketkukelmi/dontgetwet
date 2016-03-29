#-------------------------------------------------
#
# Project created by QtCreator 2016-03-24T20:34:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = dontgetwet
TEMPLATE = app


SOURCES += main.cpp \
    game.cpp \
    player.cpp \
    rain.cpp \
    health.cpp \
    score.cpp

HEADERS  += \
    game.h \
    player.h \
    rain.h \
    health.h \
    score.h

FORMS    += mainwindow.ui
