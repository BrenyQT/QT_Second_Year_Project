#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include "menu.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    qDebug()<< "rip";
    delete ui;

}



//load vector (recipe names) into list
void MainWindow::loadUplist(){
    cout << "loadUpList" << endl;
    this->ui->listOfRecipes->clear();
    cout << "Going into for loop" << endl;
    for(Recipe recipe : menu::onOffer){
        const QString name = QString::fromStdString(recipe.getName());
        ui->listOfRecipes->addItem("hello");
    }

}

//Changes the value of calories using slider
void MainWindow::on_calorieSlider_sliderMoved(int position)
{
    ui->calorieSlider->setRange(0,2500);
    QString text = QString("%1").arg(position);

    // Set the text of the QTextBrowser.

    ui->caloriesLabel->setText(text);
    ui ->caloriesLabel-> setAlignment(Qt::AlignCenter);
}

string  MainWindow:: getTimeOfDay(){
    string time =" ";
    if( ui->breakfastRadio->isChecked()){
        time = "Breakfast";
    }else if(ui->lunchRadio->isChecked()){
        time = "Lunch";
    }else if(ui->dinnerRadio->isChecked()){
        time = "Dinner";
    }
    return time;
}

vector <string>  MainWindow:: getAllergies(){
    vector <string> allergies;
    if( ui->meatBox->isChecked()){
        allergies.push_back("Meat");
    }    if( ui->milkBox->isChecked()){
        allergies.push_back("Milk");
    }    if( ui->wheatBox->isChecked()){
        allergies.push_back("Wheat");
    }    if( ui->nutsBox->isChecked()){
        allergies.push_back("Nuts");
    }
    qDebug()<< "wow";
    return allergies;
}

void MainWindow:: createNewRecipe(){
    string name  = ui->nameInsert->text().QString::toStdString();
    string timeOfDay= getTimeOfDay();
    string calories= ui->caloriesLabel->toPlainText(). QString::toStdString();
    vector <string> ingredients =  getAllergies();
    string steps = ui->plainTextEdit->toPlainText().QString::toStdString();

    string newName = name;
    string newTime = timeOfDay;
    string newCalories = calories;
    vector<string> newIngredients = ingredients;
    string newSteps = steps;

    Recipe *wRecipe =  new Recipe(newName, newTime, newCalories, newIngredients, newSteps);

       menu::addToMenu(*wRecipe);
}
void MainWindow::on_Completed_clicked()
{

    createNewRecipe();
    this->MainWindow::loadUplist();

}

