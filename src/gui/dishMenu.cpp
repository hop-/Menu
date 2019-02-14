#include "dishMenu.hpp"

#include <QWidget>
#include <QHBoxLayout>
#include <QScrollArea>
#include <QPushButton>

namespace Gui
{

DishMenu::DishMenu(QString resPath, Base::Dish dish)
    : m_resPath(resPath)
    , m_dishImgName("dish.png")
    , m_initialized(false)
    , m_imageLabel(new QLabel)
    , m_stockDish(dish)
    , m_finalDish(dish)
{
    setFixedSize(500, 800);
    setModal(true);
    connect(this, SIGNAL(newIngredientSet()), this, SLOT(onNewIngredients()));
}

void DishMenu::init()
{
    if (m_initialized)
    {
        return;
    }
    m_initialized = true;
    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->setAlignment(Qt::AlignHCenter);
    QScrollArea* scrollArea = new QScrollArea;
    scrollArea->setWidget(createIngridientsMenu());
    scrollArea->setFixedSize(450, 350);
    mainLayout->addWidget(scrollArea);
    setDishImage(DishImage(m_resPath + m_dishImgName));
    mainLayout->addWidget(m_imageLabel);
    QPushButton* acceptButton = new QPushButton("Accept");
    connect(acceptButton, SIGNAL(clicked(bool)), this, SLOT(accept()));
    mainLayout->addWidget(acceptButton);
    QPushButton* cancelButton = new QPushButton("Cancel");
    connect(cancelButton, SIGNAL(clicked(bool)), this, SLOT(reject()));
    mainLayout->addWidget(cancelButton);
    setLayout(mainLayout);
    hide();
}

void DishMenu::onNewIngredients()
{
    DishImage dishImage(m_resPath + m_dishImgName);
    m_finalDish = m_stockDish;
    for (auto& i: ingredients())
    {
        m_finalDish.addIngredient(i);
        QString ingredientPngName = i.name().c_str();
        ingredientPngName += ".png";
        dishImage = DishImage(m_resPath + ingredientPngName, dishImage);
    }
    setDishImage(dishImage);
}

void DishMenu::setDishImage(DishImage dishImage)
{
    m_imageLabel->setPixmap(QPixmap::fromImage(dishImage.image()));
}

} // namespace Gui
