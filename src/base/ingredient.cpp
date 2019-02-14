#include "ingredient.hpp"

namespace Base
{

Ingredient::Ingredient(const std::string &name, unsigned price)
    : m_name(name)
    , m_price(price)
{

}

bool Ingredient::operator<(Ingredient i) const
{
    return m_name < i.m_name;
}

const std::string &Ingredient::name() const
{
    return m_name;
}

unsigned Ingredient::price() const
{
    return m_price;
}

}
