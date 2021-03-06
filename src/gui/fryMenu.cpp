#include "fryMenu.hpp"

#include <base/ingredient.hpp>

#include <QVBoxLayout>
#include <QGroupBox>

Gui::FryMenu::FryMenu()
    : DishMenu("res/Fry/", Base::Dish(Base::Dish::Type::Fry, "Fry", 500))
{

}

QWidget *Gui::FryMenu::createIngridientsMenu()
{
    QWidget* menu = new QWidget;
    QVBoxLayout* menuLayout = new QVBoxLayout;
    m_sauceGroup = new QGroupBox("Additional Sauces");
    m_cheeseSauce = new QRadioButton("Cheese Sauce");
    connect(m_cheeseSauce, SIGNAL(clicked(bool)), this, SIGNAL(newIngredientSet()));
    m_bbqSauce = new QRadioButton("BBQ Sauce");
    connect(m_bbqSauce, SIGNAL(clicked(bool)), this, SIGNAL(newIngredientSet()));
    m_chiliSauce = new QRadioButton("Chili Sauce");
    connect(m_chiliSauce, SIGNAL(clicked(bool)), this, SIGNAL(newIngredientSet()));
    QVBoxLayout* sauceLayout = new QVBoxLayout;
    sauceLayout->addWidget(m_cheeseSauce);
    sauceLayout->addWidget(m_bbqSauce);
    sauceLayout->addWidget(m_chiliSauce);
    sauceLayout->addStretch(1);
    m_sauceGroup->setLayout(sauceLayout);
    menuLayout->addWidget(m_sauceGroup);
    m_redPepper = new QCheckBox("Red Pepper");
    connect(m_redPepper, SIGNAL(clicked(bool)), this, SIGNAL(newIngredientSet()));
    menuLayout->addWidget(m_redPepper);
    m_blackPepper = new QCheckBox("Black Pepper");
    connect(m_blackPepper, SIGNAL(clicked(bool)), this, SIGNAL(newIngredientSet()));
    menuLayout->addWidget(m_blackPepper);
    menu->setLayout(menuLayout);
    return menu;
}

std::set<Base::Ingredient> Gui::FryMenu::ingredients()
{
    std::set<Base::Ingredient> ingredients;
    if (m_cheeseSauce->isChecked())
    {
        ingredients.insert(Base::Ingredient("CheeseSauce", 200));
    }
    else if (m_bbqSauce->isChecked())
    {
        ingredients.insert(Base::Ingredient("BBQSauce", 200));
    }
    else if (m_chiliSauce->isChecked())
    {
        ingredients.insert(Base::Ingredient("ChiliSauce", 200));
    }
    if (m_redPepper->isChecked())
    {
        ingredients.insert(Base::Ingredient("RedPepper", 0));
    }
    if (m_blackPepper->isChecked())
    {
        ingredients.insert(Base::Ingredient("BlackPepper", 0));
    }
    return ingredients;
}
