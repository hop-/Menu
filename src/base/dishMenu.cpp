#include "dishMenu.hpp"

namespace Base
{

DishMenu::DishMenu(const std::string& dishName, unsigned price)
    : m_dishName(dishName)
    , m_dishPrice(price)
{
}

const std::string& DishMenu::DishName() const
{
    return m_dishName;
}

unsigned DishMenu::DishPrice() const
{
    return m_dishPrice;
}

} // namespace Base
