#include "bill.hpp"

namespace Core
{

void Bill::AddDish(Base::Dish* dish)
{
    std::string dishName;
    int cost;
}

const std::vector<std::pair<std::string, int>>& Bill::List() const
{
    return m_dishes;
}

} // namespace Core
