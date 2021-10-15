#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H

class QuackBehavior
{
public:
    virtual void quack() = 0;   //纯虚函数，子类必须自己实现
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

#endif  // QUACKBEHAVIOR_H
