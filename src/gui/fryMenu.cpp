#include "fryMenu.hpp"

#include <QVBoxLayout>
#include <QGroupBox>

Gui::FryMenu::FryMenu()
    : DishMenu("res/Fry")
{

}

QWidget *Gui::FryMenu::createIngridientsMenu()
{
    QWidget* menu = new QWidget;
    QVBoxLayout* menuLayout = new QVBoxLayout;
    QGroupBox* sauceGroup = new QGroupBox("Additional Sauces");
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
    sauceGroup->setLayout(sauceLayout);
    menuLayout->addWidget(sauceGroup);
    m_redPepper = new QCheckBox("Red Pepper");
    connect(m_redPepper, SIGNAL(clicked(bool)), this, SIGNAL(newIngredientSet()));
    menuLayout->addWidget(m_redPepper);
    m_blackPepper = new QCheckBox("Black Pepper");
    connect(m_blackPepper, SIGNAL(clicked(bool)), this, SIGNAL(newIngredientSet()));
    menuLayout->addWidget(m_blackPepper);
    menu->setLayout(menuLayout);
    return menu;
}
