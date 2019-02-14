#ifndef SOUPMENU_HPP
#define SOUPMENU_HPP


#include "dishMenu.hpp"

#include <QGroupBox>
#include <QRadioButton>
#include <QCheckBox>

namespace Gui {

class SoupMenu : public DishMenu
{
    Q_OBJECT

public:
    SoupMenu();

    // DishMenu interface
protected:
    QWidget* createIngridientsMenu() override;
    std::set<Base::Ingredient> ingredients() override;

private:
    QGroupBox* m_sauceGroup;
    QRadioButton* m_cheeseSauce;
    QRadioButton* m_chiliSauce;
};

} // namespace Gui

#endif // SOUPMENU_HPP
