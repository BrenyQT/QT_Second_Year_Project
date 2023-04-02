#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QListWidget>
#include <QMainWindow>
#include "foodcreator.h"
#include "recipe.h"
#include "menu.h"
#include "duplicateexception.h"
#include <iostream>
#include <QDebug>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    union version{
        double one ;
        float two  ;
    };

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void  loadUplist();
    void  createNewRecipe();
    string  getTimeOfDay();
    vector <string> getAllergies();

    int change = 1;




private slots:
    void on_calorieSlider_sliderMoved(int position);

    void on_Completed_clicked();

    void on_listOfRecipes_itemDoubleClicked(QListWidgetItem *item);

    void on_pushButton_clicked();


    void on_actionExit_3_triggered();

    void on_actionChange_Version_triggered();

private:


    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
