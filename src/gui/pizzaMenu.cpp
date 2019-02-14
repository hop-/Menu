#include "pizzaMenu.hpp"

#include <base/ingredient.hpp>

#include <QVBoxLayout>
#include <QGroupBox>

Gui::PizzaMenu::PizzaMenu()
    : DishMenu("res/Pizza/", Base::Dish(Base::Dish::Type::Pizza, "Pizza", 2000))
{

}

QWidget *Gui::PizzaMenu::createIngridientsMenu()
{
    QWidget* menu = new QWidget;
    QVBoxLayout* menuLayout = new QVBoxLayout;
    m_redPepper = new QCheckBox("Red Pepper");
    connect(m_redPepper, SIGNAL(clicked(bool)), this, SIGNAL(newIngredientSet()));
    menuLayout->addWidget(m_redPepper);
    m_bbqSauce = new QCheckBox("BBQ Sauce");
    connect(m_bbqSauce, SIGNAL(clicked(bool)), this, SIGNAL(newIngredientSet()));
    menuLayout->addWidget(m_bbqSauce);
    menu->setLayout(menuLayout);
    return menu;
}

std::set<Base::Ingredient> Gui::PizzaMenu::ingredients()
{
    std::set<Base::Ingredient> ingredients;
    if (m_bbqSauce->isChecked())
    {
        ingredients.insert(Base::Ingredient("BBQSauce", 200));
    }
    if (m_redPepper->isChecked())
    {
        ingredients.insert(Base::Ingredient("RedPepper", 200));
    }
    return ingredients;
}
