#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include "recipe.h"
#include "recipecreator.h"
using namespace std;
#include <iostream>
#include "QString"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    this->hide();
    recipe e ;
    e.exec();
    this->show();
}





void MainWindow::addElementToList(QString input) {

}

void MainWindow::on_actionQUIT_triggered()
{
    exit(0);
}


void MainWindow::on_pushButton_2_clicked()
{
    exit(0);
}

void MainWindow :: addToList(QString x){

    ui->setUpRecipes->addItem(x);
}

void MainWindow::on_createRecipe_clicked()
{
        this->hide();
        recipeCreator *p = new recipeCreator(this);
        connect(p, SIGNAL(sendData(QString)), this, SLOT(addToList(QString)));
        p->show();
        this->show();
}

