#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "Pizza.h"
#include <string>
using std::string;


class PizzaStore{
    protected:
    // 允许子类作决定，创建具体的pizza
    // 工厂方法，用来处理对象的创建。将创建行为封装在子类中
    virtual Pizza* createPizza(string type) = 0;
    
    public:
    // orderPizza在父类定义，不允许子类覆盖：final
    virtual Pizza* orderPizza(string type) final;
};

#endif