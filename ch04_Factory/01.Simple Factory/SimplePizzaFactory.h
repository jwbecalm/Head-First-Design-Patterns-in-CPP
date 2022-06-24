#ifndef SIMPLEPIZZAFACTORY_H
#define SIMPLEPIZZAFACTORY_H

#include "Pizza.h"
#include <string>
using std::string;

class SimplePizzaFactory {
    public:
    SimplePizzaFactory();
    ~SimplePizzaFactory();
    // 封装Pizza对象的创建
    Pizza* createPizza(string type);


};

#endif