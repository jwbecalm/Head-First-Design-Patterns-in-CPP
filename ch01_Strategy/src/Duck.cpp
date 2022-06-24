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

void Duck::performFly(){
    m_flyBehavior->fly();
}

void Duck::performQuack(){
    m_quackBehavior->quack();
}

void Duck::setFlyBehavior(FlyBehavior* fb){
    m_flyBehavior = fb;
    cout << "Duck::setFlyBehavior(), behavior changed." << endl;
}

void Duck::setQuackBehavior(QuackBehavior* qb)
{
    m_quackBehavior = qb;
}

