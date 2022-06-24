#include "../inc/PizzaStore.h"
#include <iostream>
using namespace std;

PizzaStore::PizzaStore(SimplePizzaFactory* factory){
    m_factory = factory;
    cout << "in PizzaStore(SimplePizzaFactory* factory)" << endl << endl;
}

PizzaStore::~PizzaStore(){
    cout << "in ~PizzaStore()" << endl;
}

Pizza* PizzaStore::orderPizza(string type){
    cout << "in PizzaStore::orderPizza(), begin to order pizza which type is: " << type << endl;
    Pizza* pizza = NULL;

    pizza = m_factory->createPizza(type);   // encapsulating object creattion

    // the following stay the same
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    cout << endl;

    return pizza;
}