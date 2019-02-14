#include "dish.hpp"

namespace Base
{

Dish::Dish(Type type, const std::string& name, unsigned price)
    : m_name(name)
    , m_type(type)
    , m_price(price)
    , m_ingredients()
{
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

bool Dish::addIngredient(const Ingredient &ingredient)
{
    auto ret = m_ingredients.insert(ingredient.name());
    if (ret.second)
    {
        m_price += ingredient.price();
        return true;
    }
    return false;
}

const std::set<std::string>& Dish::ingredients() const
{
    return m_ingredients;
}

} // namespace Base
