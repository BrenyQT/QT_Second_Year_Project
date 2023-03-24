#ifndef FILEWRITER_H
#define FILEWRITER_H

#include <fstream>
#include <string>

using namespace std;

class fileWriter
{
public:
    fileWriter();
    void write(string Name,string Catagorie,string Calories,string Ingredients,string Instructions);

private:
    string path;
};

#endif // FILEWRITER_H
