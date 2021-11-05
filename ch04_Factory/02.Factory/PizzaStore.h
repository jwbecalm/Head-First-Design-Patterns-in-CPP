#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "Pizza.h"
#include <string>
using std::string;


class PizzaStore{
    protected:
    virtual Pizza* createPizza(string type) = 0;
    
    public:
    Pizza* orderPizza(string type);
};

#endif