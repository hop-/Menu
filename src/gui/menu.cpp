#include "menu.hpp"
#include <core/menu.hpp>
#include <gui/dishButton.hpp>

#include <QVBoxLayout>
#include <QGridLayout>

#include <QWidget>
#include <QScrollArea>
#include <QIcon>

namespace Gui
{

Menu::Menu()
{
    setLayout(new QVBoxLayout);
    createLayout();
}

void Menu::createLayout()
{
    QWidget* menuWidget = new QWidget;
    QGridLayout* grid = new QGridLayout;
    menuWidget->setLayout(grid);
    int i = 0;
    int j = 0;
    for (const auto& d : Core::Menu::instance().dishes())
    {
        // TODO
        auto* b = new DishButton(d);
        //connect(b, &Gui::DishButton::dishSelected, this, &Gui::Menu::openDishMenu);
        grid->addWidget(b, i, j);
        j++;
        if (j == 3)
        {
            j = 0;
            i++;
        }
    }
    QScrollArea* scrollArea = new QScrollArea;
    scrollArea->setWidget(menuWidget);
    layout()->addWidget(scrollArea);
    auto* b = new QPushButton("Order");
    layout()->addWidget(b);
}

} // namespace Gui
