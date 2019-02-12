#ifndef CORE_FRYMENU_HPP
#define CORE_FRYMENU_HPP

#include <base/dishMenu.hpp>

namespace Core
{

class FryMenu : public Base::DishMenu
{
public:
    FryMenu();

public:
    void addIngredient(Base::Dish* dish) const override;
};

} // namespace Core

#endif // CORE_FRYMENU_HPP
