#ifndef NYSTYLECHEESEPIZZA_H
#define NYSTYLECHEESEPIZZA_H
#include "Pizza.h"
class NYStyleCheesePizza : public Pizza
{
    public:
    NYStyleCheesePizza();
    ~NYStyleCheesePizza();
    void prepare() override;
};


#endif