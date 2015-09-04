TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    abstractfactory.cpp \
    factory1.cpp \
    factory2.cpp \
    producta.cpp \
    productb.cpp \
    prodcuta1.cpp \
    producta2.cpp \
    prodcutb1.cpp \
    productb2.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    abstractfactory.h \
    factory1.h \
    factory2.h \
    producta.h \
    productb.h \
    prodcuta1.h \
    producta2.h \
    prodcutb1.h \
    productb2.h

