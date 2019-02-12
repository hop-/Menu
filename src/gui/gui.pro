TEMPLATE = lib
QT += widgets
CONFIG += staticlib
QMAKE_CXXFLAGS += -std=c++11

INCLUDEPATH += "../"

HEADERS = frame.hpp \
    dishButton.hpp

SOURCES = frame.cpp \
    dishButton.cpp
