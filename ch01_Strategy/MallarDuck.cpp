#include "MallarDuck.h"

#include <iostream>
using std::cout;
using std::endl;

MallarDuck:: MallarDuck(){
    cout << "in MallarDuck:: MallarDuck()" << endl;
    // 为MallarDuck 赋值其特有的行为
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
    cout << "in ~MallarDuck()" << endl;
    // delete m_flyBehavior;   // TBD: 在main中delete MallarDuck对象后，是否会自动释放new出来的成员变量？
    // delete m_quackBehavior;
}

void MallarDuck::display(){
    cout << "in MallarDuck::display()"<< endl;
}

