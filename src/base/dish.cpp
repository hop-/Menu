#include "dish.hpp"

namespace Base
{

Dish::Dish(Type type, const std::string& name, unsigned price)
    : m_name(name)
    , m_type(type)
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

const std::string& Dish::name() const
{
    return m_name;
}

Dish::Type Dish::type() const
{
    return m_type;
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
