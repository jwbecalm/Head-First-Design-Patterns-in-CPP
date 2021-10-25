#include <iostream>

#include "Decaf.h"
#include "Espresso.h"
#include "MochaDecorator.h"
#include "MilkDecorator.h"

using std::cout;
using std::endl;


int main(){
    cout << "---------------------------" << endl;
   
    // only Decaf, no addsOn
    Beverage* decafOnly = new Decaf();
    cout << decafOnly->getDescription() << endl;
    cout << decafOnly->cost() << endl;
    cout << "---------------------------" << endl;

    // Decaf + Mocha
    Beverage* decaf = new Decaf();
    MochaDecorator mocha_decaf = MochaDecorator(decaf);
    cout << mocha_decaf.getDescription() << endl;
    cout << mocha_decaf.cost() << endl;
    cout << "---------------------------" << endl;

    // Espresso + Milk
    Beverage* espresso = new Espresso();
    MilkDecorator milk_espresso = MilkDecorator(espresso);
    cout << milk_espresso.getDescription() << endl;
    cout << milk_espresso.cost() << endl;
    cout << "---------------------------" << endl;

    // Esresso + Mocha + Milk + Milk
    // Note: decorators can wrap not only components but the other decorators as well
    Beverage* espresso2 = new Espresso();                               // Espresso
    MochaDecorator* mocha_espresso = new MochaDecorator(espresso2);     // Espresso + Mocha
    MilkDecorator* milk_deco = new MilkDecorator(mocha_espresso);       // Espresso + Mocha + Milk
    MilkDecorator* milk_deco2 = new MilkDecorator(milk_deco);           // Espresso + Mocha + Milk + Milk
    cout << milk_deco2->getDescription() << endl;
    cout << milk_deco2->cost() << endl;
    cout << "---------------------------" << endl;


    delete decafOnly;
    delete decaf;
    delete espresso;
    delete espresso2;
    delete mocha_espresso;
    delete milk_deco;
    delete milk_deco2;

    return 0;
}