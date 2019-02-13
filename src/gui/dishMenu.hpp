#ifndef GUI_DISHMENU_HPP
#define GUI_DISHMENU_HPP

#include <QDialog>

namespace Gui
{

class DishMenu : public QDialog
{
    Q_OBJECT

public:
    DishMenu(QString resPath);
    void init();

protected slots:
    void onNewIngredients();

signals:
    void newIngredientSet();

protected:
    virtual QWidget* createIngridientsMenu() = 0;
    //virtual void getIngredients();

private:
    QString m_resPath;
    bool m_initialized;
};

} // namespace Gui

#endif // GUI_DISHMENU_HPP
