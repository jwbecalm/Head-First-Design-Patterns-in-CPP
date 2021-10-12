#include "Duck.h"

void Duck::performFly(){
    m_flyBehavior.fly();
}

void Duck::performQuack(){
    m_quackBehavior.quack();
}

void Duck::setFlyBehavior(FlyBehavior& fb){
    m_flyBehavior = fb;
}

void Duck::setQuackBehavior(QuackBehavior& qb)
{
    m_quackBehavior = qb;
}
