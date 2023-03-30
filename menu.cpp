#include "menu.h"

vector<Recipe> menu::onOffer;

menu::menu(){
}


 void menu::addToMenu(Recipe x){
//     qDebug() << onOffer.empty();
//     cout << "t" << endl;
    menu::onOffer.push_back(x);

}

//void menu:: removefromMenu(Recipe * x){
//    vector<Recipe>::iterator itr;
//    for(itr = onOffer.begin() ; itr != onOffer.end() ; itr++){
//        if(itr -> Instructions ==  *x.Instructions){
//            onOffer.erase(itr);
//        }
//    }
//}


