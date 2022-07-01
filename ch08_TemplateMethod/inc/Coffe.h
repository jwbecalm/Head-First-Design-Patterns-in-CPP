#ifndef COFFE_H
#define COFFE_H

#include "CaffeineBeverage.h"

class Coffe : public CaffeineBeverage{
    void brew() override;
    void addCondiments() override;
    bool CustomerWantCondiments() override;
};

#endif // COFFE_H