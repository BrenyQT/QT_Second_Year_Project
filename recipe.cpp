#include "recipe.h"
#include <string>
#include <sstream>

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

Recipe::Recipe() : consumable(), Allergies(){}

Recipe::Recipe(string name, string timeOfDay, string calories, vector <string> ingredients,  string instructions){}
//    : consumable(name) , Allergies(ingredients)
//{
//    TimeOfDay = timeOfDay;
//    Calories = calories;
//    Instructions = instructions;
//}
//void Recipe::setAllergies(vector<string> s){
//    this->Allergies.setAllergies(s);
//}
string Recipe:: getName(){
    return Name;
}
string Recipe::getTimeOfDay(){
    return TimeOfDay;
}
string Recipe:: getCalories(){
    return Calories;
}
vector<string> Recipe:: getAllergies(){
    return Allergies::getAllergies();
}
string Recipe::getInstructions(){
    return Instructions;
}
