#include "foodcreator.h"
#include <iostream>





FoodCreator::FoodCreator(string Name,string Catagorie,string Calories,string Ingredients,string Instructions){
    this->name = Name;
    this->catagorie = Catagorie;
    this->calories = Calories;
    this ->ingredients = Ingredients;
    this -> instructions = Instructions;
    hi.write(name, catagorie, calories, ingredients, instructions);
    }



