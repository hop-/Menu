#ifndef CHEFDISHMENU_HPP
#define CHEFDISHMENU_HPP


#include "dishMenu.hpp"

#include <QGroupBox>
#include <QRadioButton>
#include <QCheckBox>

namespace Gui {

class ChefDishMenu : public DishMenu
{
    Q_OBJECT

public:
    ChefDishMenu();

    // DishMenu interface
protected:
    QWidget* createIngridientsMenu() override;
    std::set<Base::Ingredient> ingredients() override;

private:
    QCheckBox* m_spice;
};

} // namespace Gui

#endif // CHEFDISHMENU_HPP
