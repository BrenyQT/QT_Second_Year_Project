#ifndef RECIPE_H
#define RECIPE_H
#include "consumable.h"
#include "allergies.h"
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <numeric>
#include "QDebug"
using namespace std;

class Recipe : public consumable , public Allergies
{

public:
    string getName();
    string getTimeOfDay();
    string getCalories();
    string getInstructions();
    string getAllergies();

    Recipe();
    Recipe(string  , string , string , vector<string> , string);

private:

    string TimeOfDay;
    string Calories;
    string Instructions;

};
#endif // RECIPE_H
