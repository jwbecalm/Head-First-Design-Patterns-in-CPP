#include "Duck.h"
#include <iostream>
using std::cout;
using std::endl;

Duck::Duck(){
    cout << "in Duck()" << endl;
}
Duck:: ~Duck(){
    cout << "in ~Duck()" << endl;
}

// 构造函数初始化列表（constructor initializer list）
Duck::Duck(FlyBehavior* fb, QuackBehavior* qb): m_flyBehavior(fb), m_quackBehavior(qb) {
    cout << "in Duck(FlyBehavior* fb, QuackBehavior* qb)" << endl;
}

void Duck::performFly(){
    m_flyBehavior->fly();
}

void Duck::performQuack(){
    m_quackBehavior->quack();
}

void Duck::setFlyBehavior(FlyBehavior* fb){
    m_flyBehavior = fb;
    cout << "in Duck:setFlyBehavior" <<endl;
}

void Duck::setQuackBehavior(QuackBehavior* qb)
{
    m_quackBehavior = qb;
}
