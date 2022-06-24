#include "../inc/RubberDuck.h"

#include <iostream>
using std::cout;
using std::endl;

RubberDuck:: RubberDuck(){
    cout << "in RubberDuck:: RubberDuck()" << endl;
    // RubberDuck 赋值默认的行为
    m_flyBehavior = new FlyNoWay();
    m_quackBehavior = new MuteQuack();
}

// 带参数的构造函数，可以在创建对象时赋值新的行为
RubberDuck:: RubberDuck(FlyBehavior* fb, QuackBehavior* qb){
    cout << "in RubberDuck(FlyBehavior* fb, QuackBehavior* qb)" << endl;
    m_flyBehavior = fb;
    m_quackBehavior = qb;
}

RubberDuck::~RubberDuck(){
    cout << "in RubberDuck::~RubberDuck()" << endl;
    delete m_flyBehavior;
    delete m_quackBehavior;
}

void RubberDuck::display(){
    cout << "in RubberDuck::display()"<< endl;
}
