#ifndef DUCK_H
#define DUCK_H

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck{
    public:
    FlyBehavior* m_flyBehavior;
    QuackBehavior* m_quackBehavior;

    Duck();     //默认构造函数
    Duck(FlyBehavior* fb, QuackBehavior* qb);   //入参为自定义的Behavior
    virtual ~Duck();    //基类的析构函数定义为虚函数，确保析构时针对动态绑定的子类进行，避免内存泄漏

    virtual void display() = 0; //每种鸭子的外观都不一样，需要子类自己实现
    
    void performFly();
    void performQuack();
    void setFlyBehavior(FlyBehavior* fb);
    void setQuackBehavior(QuackBehavior* qb);
};

#endif // DUCK_H