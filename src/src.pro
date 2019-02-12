TEMPLATE = app
QT += widgets
CONFIG += staticlib
QMAKE_CXXFLAGS += -std=c++11

LIBS += -L./gui -lgui
LIBS += -L./core -lcore
LIBS += -L./base -lbase

SOURCES = main.cpp
TARGET = ../Menu
