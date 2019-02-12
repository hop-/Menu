#include "dish.hpp"

namespace Base
{

Dish::Dish(const std::string& name, unsigned price)
    : m_name(name)
    , m_price(price)
{
}

void Dish::AddPrice(unsigned price)
{
    m_price += price;
}

int Dish::Price() const
{
    return m_price;
}

const std::string& Dish::Name()
{
    return m_name;
}

bool Dish::AddIngredient(const std::string& ingredientName)
{
    auto ret = m_ingredients.insert(ingredientName);
    return ret.second;
}

const std::set<std::string>& Dish::Ingredients() const
{
    return m_ingredients;
}

} // namespace Base
