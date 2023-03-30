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
    string getName();
    string getTimeOfDay();
    string getCalories();
    string getInstructions();
    vector<string> getAllergies();

    Recipe();
    Recipe(string  , string , string , vector<string> , string);


//    Recipe(const Recipe &r) : consumable(r.Name)
////        ,Allergies(r.Allergies.getAllergies())
//    {
//        cout << "Recipe copy" << endl;
////        r.name = this->name;
//         this->TimeOfDay = r.TimeOfDay;
//        this->Instructions = r.Instructions;
//        this->Calories = r.Calories;
////        this->setAllergies(r.Allergies::getAllergies());
//        this->listOfAllergies = r.listOfAllergies;
//        this->doSomething();
    //}
//    void setAllergies(vector<string>);
private:
    string TimeOfDay;
    string Calories;
    string Instructions;
    friend class menu;

};
#endif // RECIPE_H
