#include "../inc/MallarDuck.h"

#include <iostream>
using std::cout;
using std::endl;

MallarDuck:: MallarDuck(){
    cout << "in MallarDuck:: MallarDuck()" << endl;
    // 为MallarDuck 赋值默认的行为
    m_flyBehavior = new FlyWithWings();
    m_quackBehavior = new SimpleQuack();
}

// 带参数的构造函数，也可以在创建对象时赋值新的行为
MallarDuck:: MallarDuck(FlyBehavior* fb, QuackBehavior* qb){
    cout << "in MallarDuck(FlyBehavior* fb, QuackBehavior* qb)" << endl;
    m_flyBehavior = fb;
    m_quackBehavior = qb;
}

MallarDuck::~MallarDuck(){
    cout << "in MallarDuck::~MallarDuck()" << endl;
     delete m_flyBehavior;   
     delete m_quackBehavior;
}

void MallarDuck::display(){
    cout << "in MallarDuck::display()"<< endl;
}

