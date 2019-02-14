#ifndef GUI_DISHMENU_HPP
#define GUI_DISHMENU_HPP

#include "dishImage.hpp"

#include <base/dish.hpp>

#include <QDialog>
#include <QLabel>

#include <set>

namespace Gui
{

class DishMenu : public QDialog
{
    Q_OBJECT

public:
    DishMenu(QString resPath, Base::Dish dish);
    void init();

    // QDialog interface
public slots:
    void accept();

protected slots:
    void onNewIngredients();

signals:
    void newIngredientSet();
    void acceptDish(Base::Dish dish);

protected:
    virtual QWidget* createIngridientsMenu() = 0;
    virtual std::set<Base::Ingredient> ingredients() = 0;

private:
    void setDishImage(DishImage dishImage);

private:
    QString m_resPath;
    const QString m_dishImgName;
    bool m_initialized;
    QLabel* m_imageLabel;
    Base::Dish m_stockDish;
    Base::Dish m_finalDish;
};

} // namespace Gui

#endif // GUI_DISHMENU_HPP
