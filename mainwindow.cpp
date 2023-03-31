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
    qDebug() << "rip";
    delete ui;
}
template <class T>
T comparisent (T a, T b){
    if (a == b){
        return true ;
    }
}


void MainWindow::loadUplist()
{
    qDebug() << "loadUpList";
    ui->listOfRecipes->clear();
    qDebug() << "Going into for loop";
    for (Recipe * recipe : menu::onOffer) {

        const QString name = QString::fromStdString(recipe->getName());
        ui->listOfRecipes->addItem(name);
    }
}

//Changes the value of calories using slider
void MainWindow::on_calorieSlider_sliderMoved(int position)
{
    ui->calorieSlider->setRange(0,2500);
    QString text = QString::number(position);
    ui->caloriesLabel->setText(text);
    ui->caloriesLabel->setAlignment(Qt::AlignCenter);
}

string MainWindow::getTimeOfDay()
{
    string time = "None";
    if (ui->breakfastRadio->isChecked()) {
        time = "Breakfast";
    } else if (ui->lunchRadio->isChecked()) {
        time = "Lunch";
    } else if (ui->dinnerRadio->isChecked()) {
        time = "Dinner";
    }
    return time;
}

vector<string> MainWindow::getAllergies()
{
    vector<string> allergies;
    if (ui->meatBox->isChecked()) {
        allergies.push_back("Meat");
    }
    if (ui->milkBox->isChecked()) {
        allergies.push_back("Milk");
    }
    if (ui->wheatBox->isChecked()) {
        allergies.push_back("Wheat");
    }
    if (ui->nutsBox->isChecked()) {
        allergies.push_back("Nuts");
    }
    qDebug() << "wow";
    return allergies;
}

template<class T>
bool correct(T a, T b){
    return a == b;
}


void MainWindow::createNewRecipe()
{
    string name = ui->nameInsert->text().toStdString();
    string timeOfDay = getTimeOfDay();
    int calories = ui->calorieSlider->value();
    vector<string> ingredients = getAllergies();
    string steps = ui->plainTextEdit->toPlainText().toStdString();
    cout <<"got this far";


    Recipe * wRecipe = new Recipe(name, timeOfDay, to_string(calories), ingredients, steps);
    bool added = true;
    for(Recipe * recipe : menu::onOffer){

        if(correct(name, recipe->Name)){
            added = false;
        }
    }
    if(added == true){
        menu::onOffer.push_back(wRecipe);
    }
}




void MainWindow::on_Completed_clicked()
{

    createNewRecipe();
    loadUplist();
    qDebug()<< "sucess";
    //    ui->nameInsert->clear();

}

void operator << (Recipe* x, string y){

    string a;
    a+= x->getName()+ "\n";
    a+=x->getTimeOfDay()+ "\n";
    a+=x->getCalories()+ "\n";
    a+= x->getAllergies()+ "\n";
    a+=x->getInstructions();
    y = a;
}


void MainWindow::on_listOfRecipes_itemDoubleClicked(QListWidgetItem *item)
{


    for (Recipe * recipe : menu::onOffer) {
        if(recipe->getName() == item->text().toStdString()){
            string s;
            recipe << s;
            ui->recipeDisplay->setText(QString::fromStdString(s));
        }

    }
}

