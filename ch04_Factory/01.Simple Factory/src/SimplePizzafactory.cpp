#include "../inc/SimplePizzaFactory.h"
#include "../inc/CheesePizza.h"
#include "../inc/VeggiePizza.h"
#include <iostream>
using std::cout;
using std::endl;

SimplePizzaFactory::SimplePizzaFactory(){
    cout << "in SimplePizzaFactory()" << endl;

}

SimplePizzaFactory::~SimplePizzaFactory(){
    cout << "in ~SimplePizzaFactory()" << endl;
}

Pizza* SimplePizzaFactory::createPizza(string type){
    cout << "invoke SimplePizzaFactory::createPizza()" << endl;
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