/**
 * @file /include/qtgui/main_window.hpp
 *
 * @brief Qt based gui for qtgui.
 *
 * @date November 2010
**/
#ifndef qtgui_MAIN_WINDOW_H
#define qtgui_MAIN_WINDOW_H

/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui/QMainWindow>
#include "ui_main_window.h"
#include "qnode.hpp"

/*****************************************************************************
** Namespace
*****************************************************************************/

namespace qtgui {

/*****************************************************************************
** Interface [MainWindow]
*****************************************************************************/
/**
 * @brief Qt central, all operations relating to the view part here.
 */
class MainWindow : public QMainWindow {
    Q_OBJECT
          
      public:
    MainWindow(int argc, char** argv, QWidget *parent = 0);
    ~MainWindow();
    
    void closeEvent(QCloseEvent *event); // Overloaded function
    void showNoMasterMessage();
    
public Q_SLOTS:
    void onClickButton();
private:
    Ui::MainWindowDesign ui;
    QNode qnode;
};

}  // namespace qtgui

#endif // qtgui_MAIN_WINDOW_H
