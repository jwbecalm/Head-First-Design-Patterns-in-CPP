#ifndef CHICAGOPIZZASTORE_H
#define CHICAGOPIZZASTORE_H

#include "Pizza.h"
#include "PizzaStore.h"
#include <string>
using std::string;

class ChicagoPizzaStore : public PizzaStore{
    public:
    Pizza* createPizza(string type);

};

#endif