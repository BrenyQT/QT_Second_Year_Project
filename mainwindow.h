#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QListWidget>
#include <QMainWindow>
#include "foodcreator.h"
#include "recipe.h"
#include "menu.h"
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void  loadUplist();
    void  createNewRecipe();
    string  getTimeOfDay();
    vector <string>   getAllergies();


private slots:
    void on_calorieSlider_sliderMoved(int position);

    void on_Completed_clicked();

private:


    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
