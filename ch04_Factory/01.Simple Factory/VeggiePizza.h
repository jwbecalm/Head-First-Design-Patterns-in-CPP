#ifndef VEGGIEPIZZA_H
#define VEGGIEPIZZA_H

#include "Pizza.h"

class VeggiePizza : public Pizza {
    public:
    VeggiePizza();
    ~VeggiePizza();
    //provide specific prepare()
    void box() override;
};

#endif