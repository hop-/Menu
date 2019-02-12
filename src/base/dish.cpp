#include "dish.hpp"

namespace Base
{

Dish::Dish(const std::string& name, unsigned price)
    : m_name(name)
    , m_price(price)
{
}

void Dish::addPrice(unsigned price)
{
    m_price += price;
}

int Dish::price() const
{
    return m_price;
}

const std::string& Dish::name()
{
    return m_name;
}

bool Dish::addIngredient(const std::string& ingredientName)
{
    auto ret = m_ingredients.insert(ingredientName);
    return ret.second;
}

const std::set<std::string>& Dish::ingredients() const
{
    return m_ingredients;
}

} // namespace Base
