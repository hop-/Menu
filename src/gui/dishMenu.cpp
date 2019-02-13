#include "dishMenu.hpp"

#include <QWidget>
#include <QHBoxLayout>
#include <QScrollArea>
#include <QPushButton>

namespace Gui
{

DishMenu::DishMenu(QString resPath)
    : m_resPath(resPath)
    , m_initialized(false)
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
    scrollArea->setFixedSize(450, 450);
    mainLayout->addWidget(scrollArea);
    QPushButton* acceptButton = new QPushButton("Accept");
    connect(acceptButton, SIGNAL(clicked(bool)), this, SLOT(accept()));
    QPushButton* cancelButton = new QPushButton("Cancel");
    connect(cancelButton, SIGNAL(clicked(bool)), this, SLOT(reject()));
    mainLayout->addWidget(acceptButton);
    mainLayout->addWidget(cancelButton);
    setLayout(mainLayout);
    hide();
}

void DishMenu::onNewIngredients()
{

}

} // namespace Gui
