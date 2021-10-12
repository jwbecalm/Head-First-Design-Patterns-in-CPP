// 封装Fly和Quack两种行为，新增行为可以分别继承父类动态扩展
class FlyBehavior
{
public:
    virtual void fly() = 0;     //纯虚函数，子类必须自己实现
};
class QuackBehavior
{
public:
    virtual void quack() = 0;   //纯虚函数，子类必须自己实现
};

// 实现类
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
// 客户如果想新增一个飞行行为，直接继承接口类，提供新的实现即可。
class NewFlyWay: public FlyBehavior
{
public:
    void fly();
};

// 实现类
class SimpleQuack: public QuackBehavior
{
public:
    void quack();
};
class MuteQuack: public QuackBehavior
{
public:
    void quack();  //do nothing
};
class NewQuack: public QuackBehavior
{
public:
    void quack();
};

