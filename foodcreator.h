#ifndef FOODCREATOR_H
#define FOODCREATOR_H

#include <string>
#include <iostream>
#include <QArgument>
#include "filewriter.h"

using namespace std;
class FoodCreator
{
public:
    FoodCreator();
    FoodCreator(string Name,
                string Catagorie,
                string Calories,
                string Ingredients,
                string Instructions);
    string getName(){
        return name;
    }
    string getCatagorie(){
        return catagorie;
    }
    string getCalories(){
        return calories;
    }
    string getIngredients(){
        return ingredients;
    }
    string getInstructions(){
        return instructions;
    }


private:

    string name;
    string catagorie;
    string calories;
    string ingredients;
    string instructions;
    fileWriter hi = fileWriter();

    friend class fileWriter;
};

#endif // FOODCREATOR_H
