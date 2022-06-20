#ifndef TEA_H
#define TEA_H


#include "CaffeineBeverage.h"

class Tea : public CaffeineBeverage{
    void brew() override;
    void addCondiments() override;
    bool CustomerWantCondiments() override;
};


#endif // TEA_H