#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H

#include "Pizza.h"

class CheesePizza : public Pizza {
public:
    CheesePizza();
    ~CheesePizza();
    //provide specific prepare()
    void prepare() override;
};

#endif