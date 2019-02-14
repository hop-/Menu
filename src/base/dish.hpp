#ifndef DISH_HPP
#define DISH_HPP

#include "ingredient.hpp"

#include <string>
#include <set>

namespace Base
{

class Dish
{
public:
    enum class Type
    {
        Fry = 0,
        Pizza,
        Soup,
        ChefSpecial
    };

public:
    Dish(Type type, const std::string& name, unsigned price);

public:
    int price() const;
    const std::string& name() const;
    Type type() const;
    bool addIngredient(const Ingredient& ingredient);
    const std::set<std::string>& ingredients() const;

private:
    std::string m_name;
    Type m_type;
    unsigned m_price;
    std::set<std::string> m_ingredients;
};

} // namespace Base

#endif // DISH_HPP
