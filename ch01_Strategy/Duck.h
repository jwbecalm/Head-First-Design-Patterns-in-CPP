#ifndef DUCK_H
#define DUCK_H

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck{
    public:
    // 把鸭子的行为，委托给FlyBehavior， QuackBehavior
    FlyBehavior* m_flyBehavior;
    QuackBehavior* m_quackBehavior;

    Duck();     //default constructor
    virtual ~Duck();    //base class deconstructor set to virtual, ensure the subclass binded at runtime can invoke it's deconstructor, avoid memory leak.

    virtual void display() = 0; // each duck type has its own appearance, need subclass impl its own display method
    
    void performFly();
    void performQuack();
    void setFlyBehavior(FlyBehavior* fb);
    void setQuackBehavior(QuackBehavior* qb);
};

#endif // DUCK_H