#include "allergies.h"

Allergies::Allergies(){}

string  Allergies::getAllergies(){
    string s ="";
    for(string allergy : Allergies::listOfAllergies){
        s += allergy ;
    }
    return s;


}
