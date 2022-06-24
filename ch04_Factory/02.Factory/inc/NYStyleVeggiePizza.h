#ifndef NYSTYLEVEGGIEPIZZA_H
#define NYSTYLEVEGGIEPIZZA_H
#include "Pizza.h"
class NYStyleVeggiePizza : public Pizza
{   
    public:
    NYStyleVeggiePizza();
    ~NYStyleVeggiePizza();
    void bake() override;
};


#endif