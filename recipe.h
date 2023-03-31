#ifndef RECIPE_H
#define RECIPE_H
#include "consumable.h"
#include "allergies.h"
#include <string>
#include <vector>
using namespace std;

class Recipe : public consumable , public Allergies
{

public:
    string operator <<(string);
    friend	class MainWindow;
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
    friend class menu;

};
#endif // RECIPE_H
