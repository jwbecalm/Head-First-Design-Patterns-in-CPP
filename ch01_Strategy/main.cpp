#include "MallarDuck.h"
#include "rubberDuck.h"

#include <iostream>
using std::cout;
using std::endl;

int main(){
    cout << "mallardDuck-------------------------" << endl;
    Duck* mallardDuck = new MallarDuck();   //创建默认的MallarDuck, 在堆上创建对象
    mallardDuck->display();
    mallardDuck->performFly();
    mallardDuck->performQuack();

    // change behavior in runtime
    mallardDuck->setFlyBehavior(new NewFlyWay());
    mallardDuck->performFly();

    cout << "rocketDuck-------------------" << endl;
    FlyWthRocket flywthRocket = FlyWthRocket();   // 用自定义的行为创建MallarDuck， 在栈上创建对象
    NewQuack newQuack = NewQuack();

    Duck* rocketDuck = new MallarDuck(&flywthRocket, &newQuack);
    rocketDuck->display();
    rocketDuck->performFly();
    rocketDuck->performQuack();

    cout << "rubberDuck duck--------------------" << endl;
    Duck* rubberDuck = new RubberDuck();
    rubberDuck->display();
    rubberDuck->performFly();
    rubberDuck->performQuack();
    
        
    delete mallardDuck;     // TBD: delete 对象的时候，是否会同步delete构造函数内，为成员new的存储空间？
    delete rocketDuck;
    delete rubberDuck;

    return 0;
}