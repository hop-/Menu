TEMPLATE = app
CONFIG += staticlib
QMAKE_CXXFLAGS += -std=c++11

LIBS += -L./core -lcore
LIBS += -L./base -lbase

SOURCES = main.cpp
TARGET = ../Menu
