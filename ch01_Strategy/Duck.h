#ifndef DUCK_H
#define DUCK_H

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck{
    public:
    // 封装可以在运行时动态更换的行为/算法，委托给对应的接口去完成
    FlyBehavior* m_flyBehavior;
    // 封装可以在运行时动态更换的行为/算法，委托给对应的接口去完成
    QuackBehavior* m_quackBehavior;


    //default constructor
    Duck();

    // base class deconstructor set to virtual,
    // ensure the subclass binded at runtime can invoke it's deconstructor, avoid memory leak.     
    virtual ~Duck();    

    // each duck type has its own appearance, need subclass impl its own display method
    virtual void display() = 0; 
    
    // 子类直接继承performFly(), 子类无需override该方法
    // 在该方法中实现委托调用
    void performFly();

    // 子类直接继承performQuack()，子类无需override该方法
    // 在该方法中实现委托调用
    void performQuack();

    // 支持动态（运行时）改变FlyBehavior
    void setFlyBehavior(FlyBehavior* fb);
    // 支持动态（运行时）改变QuackBehavior
    void setQuackBehavior(QuackBehavior* qb);

};

#endif // DUCK_H