#include "recipe.h"
#include <string>

using namespace std;

Recipe::Recipe() : consumable(), Allergies(){}


//initializer list
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
        s += string + "," ;
    }
    return s;
}
string Recipe::getInstructions(){
    return Instructions;
}
