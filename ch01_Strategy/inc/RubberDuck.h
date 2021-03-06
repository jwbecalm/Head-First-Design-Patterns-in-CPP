#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H

#include "Duck.h"

// 客户需求新增的鸭子种类，可以通过继承Duck，快速实现，不用改变已有Duck类，已有Behavior类（包括已有父类，已有子类）
class RubberDuck : public Duck{
    public:
    RubberDuck();
    ~RubberDuck();
    RubberDuck(FlyBehavior* fb, QuackBehavior* qb);
    void display() override;
};

#endif // RUBBERDUCK_H