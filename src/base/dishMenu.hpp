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
    Dish* GetDish() const;
    const std::string& DishName() const;
    unsigned DishPrice() const;

protected:
    virtual void AddIngredient(Dish* dish) const = 0;
};

} // namespace Base

#endif // BASE_DISHMENU_HPP
