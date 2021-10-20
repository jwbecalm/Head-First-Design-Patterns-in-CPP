#include "Duck.h"
#include <iostream>
using std::cout;
using std::endl;

Duck::Duck(){
    cout << "in Duck::Duck()" << endl;
}
Duck:: ~Duck(){
    cout << "in Duck::~Duck()" << endl;
}

// 把鸭子的飞行行为委托给接口FlyBehavior
void Duck::performFly(){
    m_flyBehavior->fly();
}
// 把鸭子的呱呱叫行为委托给接口QuackBehavior
void Duck::performQuack(){
    m_quackBehavior->quack();
}

void Duck::setFlyBehavior(FlyBehavior* fb){
    m_flyBehavior = fb;
}

void Duck::setQuackBehavior(QuackBehavior* qb)
{
    m_quackBehavior = qb;
}
