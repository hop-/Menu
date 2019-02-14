#ifndef BASE_INGREDIENT_HPP
#define BASE_INGREDIENT_HPP

#include <string>

namespace Base
{

class Ingredient
{
    std::string m_name;
    unsigned m_price;

public:
    Ingredient(const std::string& name, unsigned price);
    bool operator<(Ingredient i) const;

public:
    const std::string& name() const;
    unsigned price() const;
};

}

#endif // BASE_INGREDIENT_HPP
