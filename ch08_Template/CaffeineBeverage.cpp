#include "CaffeineBeverage.h"
#include <iostream>
using namespace  std;

void CaffeineBeverage::prepareRecipe(){
    boilWater();
    brew();
    pourInCup();
    if(CustomerWantCondiments()){
        addCondiments();
    }
}

void CaffeineBeverage::boilWater(){
    cout << "CaffeineBeverage::boilWater()" << endl;
}

void CaffeineBeverage::pourInCup(){
    cout << "CaffeineBeverage::pourInCup()" << endl;
}

bool CaffeineBeverage::CustomerWantCondiments(){
    return false;   // default no condiments
}