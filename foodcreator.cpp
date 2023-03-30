#include "recipe.h"
#include <string>
using namespace std;

Recipe::Recipe(string name, string timeOfDay, string calories, string ingredients, string instructions) : consumable( name ){
    TimeOfDay = timeOfDay;
    Calories = calories;
    Ingredients = ingredients;
    Instructions = instructions;
}

string Recipe:: getName(){
    return Name;
}
string Recipe::getTimeOfDay(){
    return TimeOfDay;
}
string Recipe:: getCalories(){
    return Calories;
}
string Recipe::getIngredients(){
    return Ingredients;
}
string Recipe::getInstructions(){
    return Instructions;
}
