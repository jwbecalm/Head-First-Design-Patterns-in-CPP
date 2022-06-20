#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

// 接口
class FlyBehavior
{
public:
    virtual void fly() = 0;
};

// 实现类， 可以供不同的鸭子种类复用。但不用在每个鸭子类中重复代码
class FlyWithWings: public FlyBehavior
{
public:
    void fly();
};

class FlyNoWay: public FlyBehavior
{
public:
    void fly(); //do nothing
};

class FlyWthRocket: public FlyBehavior
{
public:
    void fly(); 
};

// 客户如果想新增一个飞行行为，直接继承接口类，提供新的实现即可。
class FlyNewWay: public FlyBehavior
{
public:
    void fly();
};

#endif // FLYBEHAVIOR_H