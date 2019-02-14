#ifndef GUI_MENU_H
#define GUI_MENU_H

#include <QWidget>

#include <base/dish.hpp>

namespace Gui
{

class Menu : public QWidget
{
    Q_OBJECT

public:
    Menu();

signals:
    void dishSelected(Base::Dish* dish);
    void order();

private:
    void createLayout();
};

} // namespace Gui

#endif // GUI_MENU_H
