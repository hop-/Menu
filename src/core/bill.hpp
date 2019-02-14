#ifndef CORE_BILL_HPP
#define CORE_BILL_HPP

#include <base/dish.hpp>

#include <vector>
#include <string>

namespace Core
{

class Bill
{
    std::vector<std::pair<std::string, int>> m_dishes;

public:
    void addDish(Base::Dish* dish);
    const std::vector<std::pair<std::string, int>>& List() const;
    std::string bill() const;
};

} // namespace Core

#endif // CORE_BILL_HPP
