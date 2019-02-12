#include "bill.hpp"

namespace Core
{

void Bill::AddDish(Base::Dish* dish)
{
    std::string dishName = dish->Name();
    unsigned price = dish->Price();
    std::string ingredients;
    for (auto& i : dish->Ingredients())
    {
        ingredients += i;
        ingredients += " ";
    }
    if (ingredients.length() != 0)
    {
        dishName += " with ";
        dishName += ingredients;
        dishName.pop_back();
    }
    m_dishes.push_back({dishName, price});
}

const std::vector<std::pair<std::string, int>>& Bill::List() const
{
    return m_dishes;
}

} // namespace Core
