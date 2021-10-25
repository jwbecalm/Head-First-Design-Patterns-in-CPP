#ifndef MILKDECORATOR_H
#define MILKDECORATOR_H

#include <string>
#include "Beverage.h"
#include "AddsOnDecorator.h"

using std::string;

class MilkDecorator : public AddsOnDecorator{
    Beverage* m_beverage;
    
    public:
    MilkDecorator(Beverage* beverage);
    double cost();
    string getDescription();

};
#endif