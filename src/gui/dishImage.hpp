#ifndef GUI_DISHIMAGE_HPP
#define GUI_DISHIMAGE_HPP

#include <QImage>

namespace Gui
{

class DishImage
{
public:
    DishImage(QString path);
    DishImage(QString path, DishImage image);

    QImage image() const;

private:
    QImage m_image;
};

} // namespace Gui

#endif // GUI_DISHIMAGE_HPP
