#ifndef MALLARDUCK_H
#define MALLARDUCK_H

#include "Duck.h"

class MallarDuck : public Duck{
    public:
    ~MallarDuck();

    // 必须使用构造函数初始化列表， 在其中调用父类的构造函数
    MallarDuck(FlyBehavior& flyBehavior, QuackBehavior& quackBehavior):
       Duck(flyBehavior, quackBehavior){}

    void display() override;
};

#endif // MALLARDUCK_H