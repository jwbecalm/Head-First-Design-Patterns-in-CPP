#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "Beverage.h"

class Espresso : public Beverage{
    public:
    Espresso();
    ~Espresso();
    double cost() override;
};

#endif