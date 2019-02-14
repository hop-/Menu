TEMPLATE = lib
CONFIG += staticlib
QMAKE_CXXFLAGS += -std=c++11

INCLUDEPATH += "../"

HEADERS = bill.hpp \
    menu.hpp \

SOURCES = bill.cpp \
    menu.cpp \
