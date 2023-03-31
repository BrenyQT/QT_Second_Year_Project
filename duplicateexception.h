#ifndef DUPLICATEEXCEPTION_H
#define DUPLICATEEXCEPTION_H
using namespace std;
#include <iostream>

class duplicateException : public std::exception{

public:
    char * what();

};

#endif // DUPLICATEEXCEPTION_H
