#ifndef COFFE_H
#define COFFE_H

#include "CaffeineBeverage.h"

class Coffe : public CaffeineBeverage{
    void brew();
    void addCondiments();
    bool CustomerWantCondiments() override;
};

#endif // COFFE_H