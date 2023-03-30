#ifndef MENU_H
#define MENU_H
#include "recipe.h"
#include <vector>
#include "mainwindow.h"
#include <iostream>

using namespace std;
class menu
{
public:
    friend class MainWindow;
    static vector<Recipe>onOffer;

    menu();
    static void addToMenu(Recipe x) ;
    //    void  removefromMenu(Recipe * x);


};

#endif // MENU_H
