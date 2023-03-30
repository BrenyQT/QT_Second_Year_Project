#ifndef RECIPE_H
#define RECIPE_H
#include "consumable.h"
#include <string>
#include <iostream>
#include "allergies.h"
using namespace std;

class Recipe : public consumable , public Allergies
{
public:
    Recipe();
    Recipe(string name , string timeOfDay, string calories, vector<string> ingredients, string instructions);


    string getName();
    string getTimeOfDay();
    string getCalories();
    string getIngredients();
    string getInstructions();
    ~Recipe(){
        cout << "Recipe destructor" << endl;
    }
private:
    string TimeOfDay;
    string Calories;
    string Ingredients;
    string Instructions;
};
#endif // RECIPE_H
