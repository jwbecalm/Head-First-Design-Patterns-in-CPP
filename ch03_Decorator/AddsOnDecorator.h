#ifndef ADDSONDECORATOR_H
#define ADDSONDECORATOR_H

#include <string>
using std::string;
#include "Beverage.h"

class AddsOnDecorator : public Beverage{  
    public:
    virtual string getDescription() = 0;
    virtual double cost() = 0;
};
#endif