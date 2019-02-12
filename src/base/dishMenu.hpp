#ifndef BASE_DISHMENU_HPP
#define BASE_DISHMENU_HPP

#include <string>

namespace Base
{

class Dish;

class DishMenu
{
    const std::string m_dishName;
    const unsigned m_dishPrice;

public:
    DishMenu(const std::string& dishName, unsigned price);
    virtual ~DishMenu() = default;

public:
    Dish* getDish() const;
    const std::string& dishName() const;
    unsigned dishPrice() const;

protected:
    virtual void addIngredient(Dish* dish) const = 0;
};

} // namespace Base

#endif // BASE_DISHMENU_HPP
