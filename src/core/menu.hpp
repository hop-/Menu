#ifndef CORE_MENU_HPP
#define CORE_MENU_HPP

#include <base/dishMenu.hpp>

#include <core/bill.hpp>

#include <vector>

namespace Core
{

class Menu
{
    std::vector<Base::Dish*> m_dishes;
    Bill m_bill;

public:
    static Menu& instance();
    Menu(const Menu&) = delete;
    void operator=(const Menu&) = delete;

private:
    Menu();

public:
    const std::vector<Base::Dish*>& dishes();
};

} // namespace Core

#endif // CORE_MENU_HPP
