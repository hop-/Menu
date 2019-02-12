TEMPLATE = lib
CONFIG += staticlib
QMAKE_CXXFLAGS += -std=c++11

INCLUDEPATH += "../"

HEADERS =   selector.hpp \
            bill.hpp \
            fryMenu.hpp \
            menu.hpp \

SOURCES =   selector.cpp \
            bill.cpp \
            fryMenu.cpp \
            menu.cpp \
