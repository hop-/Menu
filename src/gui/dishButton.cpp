#include "dishButton.hpp"

namespace Gui
{

DishButton::DishButton(Base::DishMenu *dish)
    : m_dish(dish)
{
    setText(dish->dishName().c_str());
    std::string path = "res/" + dish->dishName() + "/dish.png";
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
