#include "chefDishMenu.hpp"



#include <base/ingredient.hpp>

#include <QVBoxLayout>
#include <QGroupBox>

Gui::ChefDishMenu::ChefDishMenu()
    : DishMenu("res/ChefSpecial/", Base::Dish(Base::Dish::Type::ChefSpecial, "ChefSpecial", 5000))
{

}

QWidget *Gui::ChefDishMenu::createIngridientsMenu()
{
    QWidget* menu = new QWidget;
    QVBoxLayout* menuLayout = new QVBoxLayout;
    m_spice = new QCheckBox("Spices");
    connect(m_spice, SIGNAL(clicked(bool)), this, SIGNAL(newIngredientSet()));
    menuLayout->addWidget(m_spice);
    menu->setLayout(menuLayout);
    return menu;
}

std::set<Base::Ingredient> Gui::ChefDishMenu::ingredients()
{
    std::set<Base::Ingredient> ingredients;
    if (m_spice->isChecked())
    {
        ingredients.insert(Base::Ingredient("Spices", 1000));
    }
    return ingredients;
}
