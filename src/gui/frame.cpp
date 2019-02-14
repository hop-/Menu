#include "frame.hpp"
#include "fryMenu.hpp"
#include "soupMenu.hpp"
#include "pizzaMenu.hpp"
#include "chefDishMenu.hpp"

#include <QMessageBox>
#include <QApplication>

namespace Gui
{

Frame::Frame()
    : m_menuWidget(new Menu)
{
    resize(1024, 768);
    setFixedSize(this->width(), this->height());
    setCentralWidget(m_menuWidget);
    connect(m_menuWidget, &Gui::Menu::dishSelected, this, &Gui::Frame::openDishMenu);
    connect(m_menuWidget, SIGNAL(order()), this, SLOT(onOrder()));
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

void Frame::addNewDish(Base::Dish dish)
{
    m_bill.addDish(&dish);
}

void Frame::onOrder()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::information(this, "Order", m_bill.bill().c_str(),
                                  QMessageBox::Ok);
    if (reply == QMessageBox::Ok)
    {
      QApplication::quit();
    }
}

void Frame::createDishMenuList()
{
    DishMenu* dishMenu = new FryMenu;
    dishMenu->init();
    m_dishMenus[Base::Dish::Type::Fry] = dishMenu;
    connect(dishMenu, SIGNAL(acceptDish(Base::Dish)), this, SLOT(addNewDish(Base::Dish)));
    dishMenu = new PizzaMenu;
    dishMenu->init();
    m_dishMenus[Base::Dish::Type::Pizza] = dishMenu;
    connect(dishMenu, SIGNAL(acceptDish(Base::Dish)), this, SLOT(addNewDish(Base::Dish)));
    dishMenu = new SoupMenu;
    dishMenu->init();
    connect(dishMenu, SIGNAL(acceptDish(Base::Dish)), this, SLOT(addNewDish(Base::Dish)));
    m_dishMenus[Base::Dish::Type::Soup] = dishMenu;
    dishMenu = new ChefDishMenu;
    dishMenu->init();
    m_dishMenus[Base::Dish::Type::ChefSpecial] = dishMenu;
    connect(dishMenu, SIGNAL(acceptDish(Base::Dish)), this, SLOT(addNewDish(Base::Dish)));
}

} // namespace Gui
