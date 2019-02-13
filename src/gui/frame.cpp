#include "frame.hpp"
#include "dishButton.hpp"
#include "menu.hpp"

#include <core/menu.hpp>

#include <QVBoxLayout>
#include <QGridLayout>

#include <QWidget>
#include <QScrollArea>
#include <QIcon>

namespace Gui
{

Frame::Frame()
    : m_menuWidget(new Menu)
{
    resize(1024, 768);
    setFixedSize(this->width(), this->height());
    setCentralWidget(m_menuWidget);
}

void Frame::openDishMenu(Base::DishMenu *dish)
{
}

} // namespace Gui
