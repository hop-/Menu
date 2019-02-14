TEMPLATE = lib
QT += widgets
CONFIG += staticlib
QMAKE_CXXFLAGS += -std=c++11

INCLUDEPATH += "../"

HEADERS = frame.hpp \
    dishButton.hpp \
    menu.hpp \
    dishMenu.hpp \
    fryMenu.hpp \
    dishImage.hpp \
    pizzaMenu.hpp \
    soupMenu.hpp \
    chefDishMenu.hpp

SOURCES = frame.cpp \
    dishButton.cpp \
    menu.cpp \
    dishMenu.cpp \
    fryMenu.cpp \
    dishImage.cpp \
    pizzaMenu.cpp \
    soupMenu.cpp \
    chefDishMenu.cpp
