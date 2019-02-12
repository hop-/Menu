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
    void AddPrice(unsigned price);
    int Price() const;
    const std::string& Name();
    bool AddIngredient(const std::string& ingredientName);
    const std::set<std::string>& Ingredients() const;
};

} // namespace Base

#endif // DISH_HPP
