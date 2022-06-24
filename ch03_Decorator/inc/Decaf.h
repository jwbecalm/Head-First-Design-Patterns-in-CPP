#ifndef DECAF_H
#define DECAF_H

#include "Beverage.h"

class Decaf : public Beverage{
    public:
    Decaf();
    ~Decaf();

    double cost() override;
};

#endif