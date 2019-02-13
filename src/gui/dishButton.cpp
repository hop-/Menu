#include "dishButton.hpp"

#include <base/dish.hpp>

namespace Gui
{

DishButton::DishButton(Base::Dish* dish)
    : m_dish(dish)
{
    setText(dish->name().c_str());
    std::string path = "res/" + dish->name() + "/dish.png";
    setIcon(QIcon(QPixmap(path.c_str())));
    setIconSize(QSize(100, 100));
    setFixedSize(300, 300);
    connect(this, SIGNAL(clicked(bool)), this, SLOT(onClick()));
}

void DishButton::onClick()
{
    emit dishSelected(m_dish);
}

}
