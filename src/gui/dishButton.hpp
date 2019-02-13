#ifndef GUI_DISHBUTTON_HPP
#define GUI_DISHBUTTON_HPP

#include <QPushButton>

#include <base/dishMenu.hpp>

namespace Gui
{

class DishButton : public QPushButton
{
    Q_OBJECT

public:
    DishButton(Base::Dish* dish);

private slots:
    void onClick();

signals:
    void dishSelected(Base::Dish* dish);

private:
    Base::Dish* m_dish;
};

} // namespace Gui

#endif // GUI_DISHBUTTON_HPP
