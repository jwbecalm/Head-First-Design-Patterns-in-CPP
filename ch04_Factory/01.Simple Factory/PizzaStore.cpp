#include "PizzaStore.h"
#include <iostream>
using namespace std;

PizzaStore::PizzaStore(SimplePizzaFactory* factory){
    m_factory = factory;
    cout << "in PizzaStore(SimplePizzaFactory* factory)" << endl;
}
PizzaStore::PizzaStore(){
    cout << "in PizzaStore()" << endl;
}
PizzaStore::~PizzaStore(){
    cout << "in ~PizzaStore()" << endl;
}

Pizza* PizzaStore::orderPizza(string type){

    Pizza* pizza = NULL;

    pizza = m_factory->createPizza(type);   // encapsulating object creattion

    // the following stay the same
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}