#include "recipe.h"
#include "ui_recipe.h"
#include "mainwindow.h"
using namespace std;
#include <iostream>

recipe::recipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recipe)
{
    ui->setupUi(this);

}

recipe::~recipe()
{
    delete ui;
}

void recipe::on_pushButton_clicked()
{
    this->close();
}


