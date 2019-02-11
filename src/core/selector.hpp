#ifndef CORE_SELECTOR_HPP
#define CORE_SELECTOR_HPP

#include <base/strategy.hpp>

namespace Core
{

class Selector
{
public:
    enum class Dish
    {
        FranchFry = 0,
        Pizza,
        Soup,
        FromTheChef,
    };

public:
    Selector() = default;
    ~Selector() = default;

public:
    Base::Strategy* Select(int dish) const;
};

} // namespace Core

#endif // CORE_SELECTOR_HPP
