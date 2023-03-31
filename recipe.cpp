#include "recipe.h"
#include <string>
#include <sstream>

#include <iostream>
#include <vector>
#include <numeric>
#include "QDebug"
using namespace std;

Recipe::Recipe() : consumable(), Allergies(){}

Recipe::Recipe(string name, string timeOfDay, string calories, vector<string> ingredients, string instructions)
    : consumable(name), Allergies(ingredients), TimeOfDay(timeOfDay), Calories(calories), Instructions(instructions) {}



string Recipe:: getName(){
    return Name;
}
string Recipe::getTimeOfDay(){
    return TimeOfDay;
}
string Recipe:: getCalories(){\
    return Calories;
}
string  Recipe:: Recipe:: getAllergies(){
    string s ="";
    for(string string : Allergies::listOfAllergies){
        s += string ;
    }
    return s;


}
string Recipe::getInstructions(){
    return Instructions;
}
