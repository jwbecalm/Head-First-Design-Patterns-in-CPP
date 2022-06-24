#ifndef MOCHADECORATOR_H
#define MOCHADECORATOR_H

#include <string>
#include "Beverage.h"
#include "AddsOnDecorator.h"

using std::string;

class MochaDecorator : public AddsOnDecorator{
    Beverage* m_beverage;
    
    public:
    MochaDecorator(Beverage* beverage);
    ~MochaDecorator();

    double cost() override;
    string getDescription() override;

};
#endif