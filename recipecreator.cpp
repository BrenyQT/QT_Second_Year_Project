#include "recipecreator.h"
#include "ui_recipecreator.h"


#include "foodcreator.h"
#include <iostream>


using namespace std;

recipeCreator::recipeCreator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recipeCreator)
{
    ui->setupUi(this);

}

recipeCreator::~recipeCreator()
{
    delete ui;
}

void recipeCreator::on_pushButton_MainMenu_clicked()
{
    this->close();
}


void recipeCreator::createFoodObject(){

    //    cout << ui->INPUT_EnterFoodName -> text() << endl;
    string foodName = ui->INPUT_EnterFoodName->text(). QString::toStdString();
    QString output = ui->INPUT_EnterFoodName->text();

    emit(sendData(output));

    string catagorie;
    if(ui->radioButton_Breakfast->isChecked()){
        catagorie = "Breakfast";
    }
    if(ui->radioButton_Lunch->isChecked()){
        catagorie = "Lunch";
    }
    if(ui->radioButton_Dinner->isChecked()){
        catagorie = "Dinner";
    }

    string calories =  ui->LABEL_Calores->toPlainText(). QString::toStdString();


    string allergies =" ";

    if(ui->checkBox_Eggs->isChecked()){
        allergies += "eggs,";

    }
    if(ui->checkBox_Meat->isChecked()){
        allergies += "meat,";
    }
    if(ui->checkBox_Gluten->isChecked()){
        allergies += "gluten,";
    }
    if(ui->checkBox_Milk->isChecked()){
        allergies += "milk,";
    }
    if(ui->checkBox_Nuts->isChecked()){
        allergies += "nuts,";

    }
    if(ui->checkBox_Soya->isChecked()){
        allergies += "soya";
        cout << allergies;
    }

    string instructions = ui->INPUT_Steps->toPlainText(). QString::toStdString();
    FoodCreator(foodName,catagorie,calories,allergies,instructions);

}
void recipeCreator::on_pushButton_Finish_clicked(){
    createFoodObject();
    this->close();
}


void recipeCreator::on_horizontalSlider_Calories_sliderMoved(int position)
{
    ui->horizontalSlider_Calories->setRange(0,2500);
    QString text = QString("Calories: %1").arg(position);

       // Set the text of the QTextBrowser.

       ui->LABEL_Calores->setText(text);
       ui ->LABEL_Calores-> setAlignment(Qt::AlignCenter);

}


