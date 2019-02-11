#include "menu.hpp"

#include <base/dish.hpp>

#include <iostream>

namespace Core
{

Menu& Menu::Instance()
{
    static Menu instance;
    return instance;
}

Menu::Menu()
{
}

void Menu::Start()
{
    while (true)
    {
        Show();
        int dishID;
        std::cin >> dishID;
        if (dishID == -1)
        {
            ShowBill();
            break;
        }
        if (dishID == -2)
        {
            break;
        }
        Base::DishMenu* dishMenu = Select(dishID);
        if (dishMenu == nullptr)
        {
            continue;
        }
        Base::Dish* dish = dishMenu->GetDish();
        if (dish == nullptr)
        {
            continue;
        }
        AddToBill(dish);
        delete dish;
    }
}

Base::DishMenu* Menu::Select(int dishID)
{
    if (dishID < 0 || dishID >= static_cast<int>(m_dishes.size()))
    {
        return nullptr;
    }
    return m_dishes[dishID];
}

void Menu::Show()
{
    std::cout << "(-2) Exit" << std::endl;
    std::cout << "(-1) Order" << std::endl;
    std::cout << "Choose a dish" << std::endl;
    for (unsigned i = 0; i < m_dishes.size(); i++)
    {
        std::cout << "(" << i << ") " << m_dishes[i]->DishName() << " - " << m_dishes[i]->DishPrice() << std::endl;
    }
}

void Menu::AddToBill(Base::Dish* dish)
{
    m_bill.AddDish(dish);
}

void Menu::ShowBill()
{
    int overall = 0;
    for (const auto& d: m_bill.List())
    {
        overall += d.second;
        std::cout << d.first << " - " << d.second << std::endl;
    }
    std::cout << "Overall: " << overall << std::endl;
}

} // namespace Core
