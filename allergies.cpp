#include "allergies.h"
#include <sstream>
#include <iostream>
Allergies::Allergies(){}
void Allergies::setAllergies(vector<string> s){
    this->listOfAllergies = s;
}
string  Allergies::getAllergies(){
    string s ="";
    for(string string : Allergies::listOfAllergies){
        s += string ;
    }
    return s;


}
void Allergies::doSomething(){
    std::cout << "JH" << endl;
}
