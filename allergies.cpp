#include "allergies.h"
#include <sstream>
#include <iostream>
Allergies::Allergies(){}
void Allergies::setAllergies(vector<string> s){
    this->listOfAllergies = s;
}
vector<string> Allergies::getAllergies(){
//    std::stringstream ss;
//    for (auto it = listOfAllergies.begin(); it != listOfAllergies.end(); it++)    {
//        if (it != listOfAllergies.begin()) {
//            ss << " ";
//        }
//        ss << *it;
//}
//    return ss.str();
    return this->listOfAllergies;
}
void Allergies::doSomething(){
    std::cout << "JH" << endl;
}
