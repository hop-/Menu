#include "menu.hpp"

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
    m_dishes.push_back(new Base::Dish(Base::Dish::Type::Fry, "Fry", 500));
    m_dishes.push_back(new Base::Dish(Base::Dish::Type::Pizza, "Pizza", 2000));
    m_dishes.push_back(new Base::Dish(Base::Dish::Type::Soup, "Soup", 1200));
    m_dishes.push_back(new Base::Dish(Base::Dish::Type::ChefSpecial, "ChefSpecial", 5000));
}

const std::vector<Base::Dish *>& Menu::dishes()
{
    return m_dishes;
}

} // namespace Core
