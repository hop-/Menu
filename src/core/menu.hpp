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
    static Menu& Instance();
    Menu(const Menu&) = delete;
    void operator=(const Menu&) = delete;

private:
    Menu();

public:
    void Start();

private:
    void Show();
    void ShowBill();
    Base::DishMenu* Select(int dishID);
    void AddToBill(Base::Dish* dish);
};

} // namespace Core

#endif // CORE_MENU_HPP
