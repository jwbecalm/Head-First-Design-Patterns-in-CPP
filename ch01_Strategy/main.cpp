#include "MallarDuck.h"
#include "RubberDuck.h"

#include <iostream>
using std::cout;
using std::endl;

int main(){
    Duck* mallard = new MallarDuck();
    mallard->display();
    mallard->performFly();
    mallard->performQuack();

    // 运行时改变行为
    mallard->setFlyBehavior(new NewFlyWay());
    mallard->performFly();

    Duck* rubber = new RubberDuck();
    rubber->display();
    rubber->performFly();
    rubber->performQuack();
    
        
    delete mallard;
    delete rubber;
    
    return 0;
}