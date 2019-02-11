TEMPLATE = app
CONFIG += staticlib

LIBS += -L./core -lcore
LIBS += -L./base -lbase

SOURCES = main.cpp
TARGET = ../Menu
