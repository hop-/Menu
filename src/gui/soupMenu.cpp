#include "soupMenu.hpp"

#include <base/ingredient.hpp>

#include <QVBoxLayout>
#include <QGroupBox>

Gui::SoupMenu::SoupMenu()
    : DishMenu("res/Soup/", Base::Dish(Base::Dish::Type::Soup, "Soup", 1200))
{

}

QWidget *Gui::SoupMenu::createIngridientsMenu()
{
    QWidget* menu = new QWidget;
    QVBoxLayout* menuLayout = new QVBoxLayout;
    m_sauceGroup = new QGroupBox("Additional Sauces");
    m_cheeseSauce = new QRadioButton("Cheese Sauce");
    connect(m_cheeseSauce, SIGNAL(clicked(bool)), this, SIGNAL(newIngredientSet()));
    m_chiliSauce = new QRadioButton("Chili Sauce");
    connect(m_chiliSauce, SIGNAL(clicked(bool)), this, SIGNAL(newIngredientSet()));
    QVBoxLayout* sauceLayout = new QVBoxLayout;
    sauceLayout->addWidget(m_cheeseSauce);
    sauceLayout->addWidget(m_chiliSauce);
    sauceLayout->addStretch(1);
    m_sauceGroup->setLayout(sauceLayout);
    menuLayout->addWidget(m_sauceGroup);
    menu->setLayout(menuLayout);
    return menu;
}

std::set<Base::Ingredient> Gui::SoupMenu::ingredients()
{
    std::set<Base::Ingredient> ingredients;
    if (m_cheeseSauce->isChecked())
    {
        ingredients.insert(Base::Ingredient("CheeseSauce", 200));
    }
    else if (m_chiliSauce->isChecked())
    {
        ingredients.insert(Base::Ingredient("ChiliSauce", 200));
    }
    return ingredients;
}
