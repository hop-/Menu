#ifndef FRYMENU_HPP
#define FRYMENU_HPP

#include "dishMenu.hpp"

#include <QRadioButton>
#include <QCheckBox>

namespace Gui {

class FryMenu : public DishMenu
{
    Q_OBJECT

public:
    FryMenu();

    // DishMenu interface
protected:
    QWidget* createIngridientsMenu() override;
    QRadioButton* m_cheeseSauce;
    QRadioButton* m_bbqSauce;
    QRadioButton* m_chiliSauce;
    QCheckBox* m_redPepper;
    QCheckBox* m_blackPepper;
};

} // namespace Gui

#endif // FRYMENU_HPP
