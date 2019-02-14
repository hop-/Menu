#ifndef PIZZAMENU_HPP
#define PIZZAMENU_HPP


#include "dishMenu.hpp"

#include <QGroupBox>
#include <QRadioButton>
#include <QCheckBox>

namespace Gui {

class PizzaMenu : public DishMenu
{
    Q_OBJECT

public:
    PizzaMenu();

    // DishMenu interface
protected:
    QWidget* createIngridientsMenu() override;
    std::set<Base::Ingredient> ingredients() override;

private:
    QCheckBox* m_redPepper;
    QCheckBox* m_bbqSauce;
};

} // namespace Gui

#endif // PIZZAMENU_HPP
