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
    virtual Dish* GetDish() const = 0;
    const std::string& DishName() const;
    unsigned DishPrice() const;
};

} // namespace Base

#endif // BASE_DISHMENU_HPP
