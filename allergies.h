#ifndef ALLERGIES_H
#define ALLERGIES_H
#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std ;

class Allergies
{
public:
    Allergies();
    Allergies(vector <string> allergies){
        this ->listOfAllergies = allergies ;
    }


    virtual string  getAllergies();

    ~Allergies(){}


    vector<string> listOfAllergies;

};

#endif // ALLERGIES_H
