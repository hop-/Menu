#ifndef DISH_HPP
#define DISH_HPP

#include <string>
#include <set>

namespace Base
{

class Dish
{
public:
    enum class Type
    {
        Fry,
        Pizza,
        Soup,
        ChefSpecial
    };

public:
    Dish(Type type, const std::string& name, unsigned price);
    ~Dish() = default;

public:
    void addPrice(unsigned price);
    int price() const;
    const std::string& name() const;
    Type type() const;
    bool addIngredient(const std::string& ingredientName);
    const std::set<std::string>& ingredients() const;

private:
    const std::string m_name;
    const Type m_type;
    unsigned m_price;
    std::set<std::string> m_ingredients;
};

} // namespace Base

#endif // DISH_HPP
