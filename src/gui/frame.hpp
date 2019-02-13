#ifndef GUI_FRAME_HPP
#define GUI_FRAME_HPP

#include "menu.hpp"
#include "dishMenu.hpp"

#include <base/dish.hpp>

#include <QMainWindow>

namespace Gui
{

class Frame : public QMainWindow
{
    Q_OBJECT

public:
    Frame();

private slots:
    void openDishMenu(Base::Dish* dish);

private:
    void createDishMenuList();

private:
    Menu* m_menuWidget;
    std::map<Base::Dish::Type, DishMenu*> m_dishMenus;
};

} // namespace Gui

#endif // GUI_FRAME_HPP
