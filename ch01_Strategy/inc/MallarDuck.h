#ifndef MALLARDUCK_H
#define MALLARDUCK_H

#include "Duck.h"

class MallarDuck : public Duck{
    public:
    MallarDuck();
    ~MallarDuck();
    MallarDuck(FlyBehavior* fb, QuackBehavior* qb);
    void display() override;
};

#endif // MALLARDUCK_H