#include "dishMenu.hpp"
#include "dish.hpp"

namespace Base
{

DishMenu::DishMenu(const std::string& dishName, unsigned price)
    : m_dishName(dishName)
    , m_dishPrice(price)
{
}

const std::string& DishMenu::dishName() const
{
    return m_dishName;
}

unsigned DishMenu::dishPrice() const
{
    return m_dishPrice;
}

Dish* DishMenu::getDish() const
{
    //Dish* dish = new Dish(dishName(), dishPrice());
    //addIngredient(dish);
    //return dish;
    return nullptr;
}

} // namespace Base
