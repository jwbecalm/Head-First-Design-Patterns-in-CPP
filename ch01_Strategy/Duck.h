#include "DuckBehavior.h"

class Duck{
    public:
    FlyBehavior &m_flyBehavior;
    QuackBehavior &m_quackBehavior;
    virtual void display() = 0; //每种鸭子的外观都不一样，需要子类自己实现
    void performFly();
    void performQuack();
    void setFlyBehavior(FlyBehavior &fb);
    void setQuackBehavior(QuackBehavior &qb);
};