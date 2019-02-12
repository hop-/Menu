#ifndef GUI_FRAME_HPP
#define GUI_FRAME_HPP

#include <base/dishMenu.hpp>

#include <QMainWindow>

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
    void createLayout();

private:
    QLayout* m_layout;
    QWidget* m_widget;
};

} // namespace Gui

#endif // GUI_FRAME_HPP
