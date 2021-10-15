#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H

#include "Duck.h"

class RubberDuck : public Duck{
    public:
    RubberDuck();
    ~RubberDuck();
    RubberDuck(FlyBehavior* fb, QuackBehavior* qb);
    void display();
};

#endif // RUBBERDUCK_H