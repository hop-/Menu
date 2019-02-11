#ifndef CORE_FRYMENU_HPP
#define CORE_FRYMENU_HPP

#include <base/dishMenu.hpp>
#include <base/dish.hpp>

namespace Core
{

class FryMenu : public Base::DishMenu
{
public:
    Base::Dish* GetDish() const override;
};

} // namespace Core

#endif // CORE_FRYMENU_HPP
