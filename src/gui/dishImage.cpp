#include "dishImage.hpp"

#include <QPainter>

namespace Gui
{

DishImage::DishImage(QString path)
    : m_image(path)
{
}

DishImage::DishImage(QString path, DishImage image)
    : m_image(QSize(300, 300), QImage::Format_ARGB32_Premultiplied)
{
    QImage tmpImage(path);
    QPainter p(&m_image);
    p.setCompositionMode(QPainter::CompositionMode_SourceOver);
    p.drawImage(0, 0, image.image());
    p.drawImage(0, 0, tmpImage);
    p.end();
}

QImage DishImage::image() const
{
    return m_image;
}

}
