#ifndef GUI_MENU_H
#define GUI_MENU_H

#include <QWidget>

namespace Gui
{

class Menu : public QWidget
{
    Q_OBJECT

public:
    Menu();

private:
    void createLayout();
};

} // namespace Gui

#endif // GUI_MENU_H
