#include "menu.hpp"
#include "fryMenu.hpp"

#include <base/dish.hpp>

#include <iostream>

namespace Core
{

Menu& Menu::instance()
{
    static Menu instance;
    return instance;
}

Menu::Menu()
{
    m_dishes.push_back(new FryMenu);
}

void Menu::start()
{
    while (true)
    {
        show();
        int dishID;
        std::cin >> dishID;
        if (dishID == -1)
        {
            showBill();
            break;
        }
        if (dishID == -2)
        {
            break;
        }
        Base::DishMenu* dishMenu = select(dishID);
        if (dishMenu == nullptr)
        {
            continue;
        }
        Base::Dish* dish = dishMenu->getDish();
        if (dish == nullptr)
        {
            continue;
        }
        addToBill(dish);
        delete dish;
    }
}

const std::vector<Base::DishMenu *> &Menu::dishes()
{
    return m_dishes;
}

Base::DishMenu* Menu::select(int dishID)
{
    std::cout << m_dishes.size() << std::endl;
    if (dishID < 0 || dishID >= static_cast<int>(m_dishes.size()))
    {
        return nullptr;
    }
    return m_dishes[dishID];
}

void Menu::show()
{
    std::cout << "(-2) Exit" << std::endl;
    std::cout << "(-1) Order" << std::endl;
    std::cout << "Choose a dish" << std::endl;
    for (unsigned i = 0; i < m_dishes.size(); i++)
    {
        std::cout << "(" << i << ") " << m_dishes[i]->dishName() << " - " << m_dishes[i]->dishPrice() << std::endl;
    }
}

void Menu::addToBill(Base::Dish* dish)
{
    m_bill.addDish(dish);
}

void Menu::showBill()
{
    std::cout << "====================" << std::endl;
    int overall = 0;
    for (const auto& d: m_bill.List())
    {
        overall += d.second;
        std::cout << d.first << " - " << d.second << std::endl;
    }
    std::cout << "Overall: " << overall << std::endl;
}

} // namespace Core
