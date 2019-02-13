#ifndef GUI_FRAME_HPP
#define GUI_FRAME_HPP

#include <base/dishMenu.hpp>

#include <QMainWindow>

#include  <vector>

namespace Gui
{

class Frame : public QMainWindow
{
    Q_OBJECT

public:
    Frame();

private slots:
    void openDishMenu(Base::DishMenu* dish);

private:
    QWidget* m_menuWidget;
};

} // namespace Gui

#endif // GUI_FRAME_HPP
