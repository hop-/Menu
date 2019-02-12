#ifndef CORE_MENU_HPP
#define CORE_MENU_HPP

#include <base/dishMenu.hpp>

#include <core/bill.hpp>

#include <vector>

namespace Core
{

class Menu
{
    std::vector<Base::DishMenu*> m_dishes;
    Bill m_bill;

public:
    static Menu& instance();
    Menu(const Menu&) = delete;
    void operator=(const Menu&) = delete;

private:
    Menu();

public:
    void start();
    const std::vector<Base::DishMenu*>& dishes();

private:
    void show();
    void showBill();
    Base::DishMenu* select(int dishID);
    void addToBill(Base::Dish* dish);
};

} // namespace Core

#endif // CORE_MENU_HPP
