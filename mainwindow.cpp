#include "mainwindow.h"
#include "./ui_mainwindow.h"



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


//clear list and add all elements within the vectoe on  offer
void MainWindow::loadUplist()
{
    ui->listOfRecipes->clear();
    for (Recipe * recipe : menu::onOffer) {
        const QString name = QString::fromStdString(recipe->getName());
        ui->listOfRecipes->addItem(name);
    }
}

//Changes the value of calories using slider
//implimented a bit struture to cap the amount of calories on slider
void MainWindow::on_calorieSlider_sliderMoved(int position)
{

    ui->calorieSlider->setRange(0, 2050);
    struct CalorieLimit {
        unsigned int limit : 11;
    };
    CalorieLimit calorieLimit;
    calorieLimit.limit = position;
    QString text = QString::number(calorieLimit.limit);
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

    return allergies;
}


//template class which compares 2 values and returns a bool
template<class T>
bool correct(T a, T b){
    return a == b;
}


void MainWindow::createNewRecipe()
{
    //getting all the arguments from UI
    string name = ui->nameInsert->text().toStdString();
    string timeOfDay = getTimeOfDay();
    int calories = ui->calorieSlider->value();
    vector<string> ingredients = getAllergies();
    string steps = ui->plainTextEdit->toPlainText().toStdString();


    //checking if recipe has been added previously
    Recipe * wRecipe = new Recipe(name, timeOfDay, to_string(calories), ingredients, steps);
    bool added = false;
    for(Recipe * recipe : menu::onOffer){

        if(correct(name, recipe->Name)){
            added = true;
        }
    }
    if(added == false){
        menu::onOffer.push_back(wRecipe);
    }else{
        try{
            throw duplicateException();
        }
        catch(duplicateException e){
            e.what();

        }
    }
}



//causes recipe constructor and list addition events
void MainWindow::on_Completed_clicked()
{
    createNewRecipe();
    loadUplist();
}

//overloaded << operator to chnage recipes argumenst to string
void operator << (Recipe* x, string& y){
    y+= "Name : " +  x->getName()+ "\n";
    y+= "Time Of Day : " + x->getTimeOfDay()+ "\n";
    y+="Calories : " + x->getCalories()+ "\n";
    y+= "Allergies : " + x->getAllergies()+ "\n";
    y+= "Instructions : " + x->getInstructions();
}

//using the overloaded operator to print item out
void MainWindow::on_listOfRecipes_itemDoubleClicked(QListWidgetItem *item)
{
    for (Recipe * recipe : menu::onOffer) {
        if(recipe->getName() == item->text().toStdString()){
            string stringRecipe ;
            recipe << stringRecipe ;
            ui->recipeDisplay->setText(QString::fromStdString(stringRecipe));
        }

    }
}

//clearing the selection
void MainWindow::on_pushButton_clicked()
{
    ui->recipeDisplay->clear();
    ui->nameInsert->clear();
    ui->caloriesLabel->setText("Enter Amount Of Calories");
    ui->caloriesLabel->setAlignment(Qt::AlignCenter);
    ui->plainTextEdit->clear();

}



void MainWindow::on_actionExit_3_triggered()
{
    exit(0);
}



void MainWindow::on_actionChange_Version_triggered()
{
    change *=  -1;
    version v;
    if(change < 0){
        v.one =  3.42;
        ui->version->setText("VESRION : " + QString::number( v.one));
    }else if (change > 0 ){
        v.two  = 2.098474;
        ui->version->setText("VESRION : " + QString::number(v.two));
    }
}
