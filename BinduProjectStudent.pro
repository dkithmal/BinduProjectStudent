#-------------------------------------------------
#
# Project created by QtCreator 2013-11-01T21:10:13
#
#-------------------------------------------------

QT       += core gui
QT       += xml
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BinduProjectStudent
TEMPLATE = app


SOURCES += main.cpp\
        student.cpp \
    homeworktool.cpp \
    openhomework.cpp \
    opennote.cpp \
    answertopaper.cpp \
    viewnote.cpp

HEADERS  += student.h \
    homeworktool.h \
    openhomework.h \
    opennote.h \
    answertopaper.h \
    viewnote.h

FORMS    += student.ui \
    homeworktool.ui \
    openhomework.ui \
    opennote.ui \
    answertopaper.ui \
    viewnote.ui
