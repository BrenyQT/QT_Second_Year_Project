#ifndef CONSUMABLE_H
#define CONSUMABLE_H
#include <iostream>
#include <string>
using namespace std;

class consumable
{
    friend class MainWindow;

public:

    consumable(){};
    consumable(string name){
        this->Name = name  ;
    }

    virtual string getName() = 0;
    ~consumable(){
        std::cout << "Consumable destructor" << endl;
    }

protected:
    string Name;


};

#endif // CONSUMABLE_H

