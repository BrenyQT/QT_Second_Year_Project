#include "allergies.h"
#include <sstream>
#include <iostream>
Allergies::Allergies(){}
void Allergies::setAllergies(vector<string> s){
    this->listOfAllergies = s;
}
vector<string> Allergies::getAllergies(){

    return this->listOfAllergies;
}

