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
    DishButton(Base::DishMenu* dish);

private slots:
    void onClick();

signals:
    void dishSelected(Base::DishMenu* dish);

private:
    Base::DishMenu* m_dish;
};

} // namespace Gui

#endif // GUI_DISHBUTTON_HPP
