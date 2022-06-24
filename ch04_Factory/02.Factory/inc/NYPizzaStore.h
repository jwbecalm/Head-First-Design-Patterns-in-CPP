#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H


#include <string>
using std::string;
#include "Pizza.h"
#include "PizzaStore.h"

class NYPizzaStore: public PizzaStore{
    public:
    Pizza* createPizza(string type) override;
};

#endif