#ifndef ALLERGIES_H
#define ALLERGIES_H
#include <vector>
#include <string>
#include <iostream>
using namespace std ;

class Allergies
{
public:
    Allergies();
    Allergies(string allergies){
        this ->listOfAllergies = allergies ;
    }
    virtual vector<string>  getAllergies();
    virtual void setAllergies(vector<string>);
    void doSomething();

    Allergies(const Allergies& a){
        cout << "Allergies Copy" << endl;
        this->listOfAllergies = a.listOfAllergies;
    }
    ~Allergies(){
        cout << "Allergies desturtor" << endl;
    }


    vector<string> listOfAllergies;
    string s;
};

#endif // ALLERGIES_H
