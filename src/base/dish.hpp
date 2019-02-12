#ifndef DISH_HPP
#define DISH_HPP

#include <string>
#include <set>

namespace Base
{

class Dish
{
    const std::string m_name;
    unsigned m_price;
    std::set<std::string> m_ingredients;

public:
    Dish(const std::string& name, unsigned price);
    ~Dish() = default;

public:
    void addPrice(unsigned price);
    int price() const;
    const std::string& name();
    bool addIngredient(const std::string& ingredientName);
    const std::set<std::string>& ingredients() const;
};

} // namespace Base

#endif // DISH_HPP
