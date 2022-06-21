#include "SimplePizzaFactory.h"
#include "CheesePizza.h"
#include "VeggiePizza.h"
#include <iostream>
using std::cout;
using std::endl;

SimplePizzaFactory::SimplePizzaFactory(){
    cout << "in SimplePizzaFactory()" << endl << endl;

}

SimplePizzaFactory::~SimplePizzaFactory(){
    cout << "in ~SimplePizzaFactory()" << endl;
}

Pizza* SimplePizzaFactory::createPizza(string type){
    Pizza* pizza = NULL;

    if (type.compare("cheese") == 0){
        pizza = new CheesePizza();
    }
    else if (type.compare("veggie") == 0){
        pizza = new VeggiePizza();
    }
    // ..
    return pizza;

}