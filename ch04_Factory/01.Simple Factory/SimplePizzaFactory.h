#ifndef SIMPLEPIZZAFACTORY_H
#define SIMPLEPIZZAFACTORY_H

#include "Pizza.h"
#include <string>
using std::string;

class SimplePizzaFactory {
    public:
    SimplePizzaFactory();
    ~SimplePizzaFactory();
    Pizza* createPizza(string type);


};

#endif