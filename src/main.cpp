#include <iostream>
#include <core/menu.hpp>
#include <gui/frame.hpp>

#include <QApplication>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    Gui::Frame frame;
    frame.show();
    //Core::Menu::Instance().Start();
    return app.exec();
}
