#include "filewriter.h"


fileWriter::fileWriter()
{
    this->path = "../untitled1/file.csv";
//"../untitled1/file.csv"
}
void fileWriter::write(string Name,string Catagorie,string Calories,string Ingredients,string Instructions){
    fstream writer(path);
    writer << Name << Catagorie<<  Calories<< Ingredients<< Instructions, "\n";
    writer.close();
}
