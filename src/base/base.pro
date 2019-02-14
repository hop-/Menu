TEMPLATE = lib

QT -= core gui
CONFIG += staticlib
QMAKE_CXXFLAGS += -std=c++11

HEADERS =   dish.hpp \
    ingredient.hpp

SOURCES =   dish.cpp \
    ingredient.cpp
