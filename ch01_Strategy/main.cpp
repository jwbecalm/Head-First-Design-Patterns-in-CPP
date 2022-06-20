#include "MallarDuck.h"
#include "rubberDuck.h"

#include <iostream>
using std::cout;
using std::endl;

int main(){
    cout << "create mallardDuck on heap---------------------------------" << endl;
    //create default MallarDuck on heap
    MallarDuck* mallardDuck = new MallarDuck();   
    mallardDuck->display();
    mallardDuck->performFly();
    mallardDuck->performQuack();
    // change behavior in runtime
    mallardDuck->setFlyBehavior(new FlyNewWay());
    mallardDuck->performFly();


    cout << "\ncreate MallarDuck on stack-----------" << endl;
    // create custom MallarDuck on stack.
    MallarDuck rocketDuck =  MallarDuck(new FlyWthRocket(), new NewQuack());
    rocketDuck.display();
    rocketDuck.performFly();
    rocketDuck.performQuack();

    cout << "\ncreate rubberDuck duck on stack-----------------------------" << endl;
    RubberDuck rubberDuck;
    rubberDuck.display();
    rubberDuck.performFly();
    rubberDuck.performQuack();
    cout << endl;

    cout << "deleting the new object on heap." << endl;
    delete mallardDuck;     // when delete object on the heap, 
                            // it will not delete member object which also create by new operator in constructor
                            // need to delete explictly in deconstructor: ~MallarDuck(), ~RubberDuck().
    cout << "\nin main, before return 0" << endl;

    return 0;
}