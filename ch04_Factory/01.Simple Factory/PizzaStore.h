#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "SimplePizzaFactory.h"
#include <string>
using std::string;

class PizzaStore {
    SimplePizzaFactory* m_factory;
    
    public:
    PizzaStore();
    ~PizzaStore();
    PizzaStore(SimplePizzaFactory* factory);
    virtual Pizza* orderPizza(string type);
};

#endif