#include "frame.hpp"
#include "dishButton.hpp"

#include <core/menu.hpp>

#include <QVBoxLayout>
#include <QGridLayout>

#include <QWidget>
#include <QScrollArea>
#include <QIcon>

namespace Gui
{

Frame::Frame()
    : m_layout(new QVBoxLayout)
    , m_widget(new QWidget)
{
    resize(1024, 768);
    setFixedSize(this->width(), this->height());
    setCentralWidget(m_widget);
    m_widget->setLayout(m_layout);
    createLayout();
}

void Frame::openDishMenu(Base::DishMenu *dish)
{
}

void Frame::createLayout()
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
        connect(b, &Gui::DishButton::dishSelected, this, &Gui::Frame::openDishMenu);
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
    m_layout->addWidget(scrollArea);
    auto* b = new QPushButton("Order");
    m_layout->addWidget(b);
}

} // namespace Gui
