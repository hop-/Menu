#ifndef DISH_HPP
#define DISH_HPP

#include <string>
#include <vector>

namespace Base
{

class Dish
{
    int m_price;
    const std::string m_name;
    std::vector<std::string> ingridients;

public:
    Dish(std::string name, int price);

public:
    void AddPrice(int price);
    int Price() const;
    const std::string& Name();
};

} // namespace Base

#endif // DISH_HPP
