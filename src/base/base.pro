TEMPLATE = lib

QT -= core gui
CONFIG += staticlib
QMAKE_CXXFLAGS += -std=c++11

HEADERS =   decorator.hpp \
            dish.hpp \
            dishMenu.hpp \
            strategy.hpp

SOURCES =   dish.cpp \
            dishMenu.cpp \
