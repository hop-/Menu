#include "frame.hpp"
#include "fryMenu.hpp"
#include "soupMenu.hpp"
#include "pizzaMenu.hpp"
#include "chefDishMenu.hpp"

namespace Gui
{

Frame::Frame()
    : m_menuWidget(new Menu)
{
    resize(1024, 768);
    setFixedSize(this->width(), this->height());
    setCentralWidget(m_menuWidget);
    connect(m_menuWidget, &Gui::Menu::dishSelected, this, &Gui::Frame::openDishMenu);
    createDishMenuList();
}

void Frame::openDishMenu(Base::Dish* dish)
{
    const auto dishMenu = m_dishMenus.find(dish->type());
    if (dishMenu == m_dishMenus.end())
    {
        return;
    }
    dishMenu->second->show();
}

void Frame::createDishMenuList()
{
    DishMenu* dishMenu = new FryMenu;
    dishMenu->init();
    m_dishMenus[Base::Dish::Type::Fry] = dishMenu;
    dishMenu = new PizzaMenu;
    dishMenu->init();
    m_dishMenus[Base::Dish::Type::Pizza] = dishMenu;
    dishMenu = new SoupMenu;
    dishMenu->init();
    m_dishMenus[Base::Dish::Type::Soup] = dishMenu;
    dishMenu = new ChefDishMenu;
    dishMenu->init();
    m_dishMenus[Base::Dish::Type::ChefSpecial] = dishMenu;
}

} // namespace Gui
