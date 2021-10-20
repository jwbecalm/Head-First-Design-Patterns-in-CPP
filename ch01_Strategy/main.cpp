#include "MallarDuck.h"
#include "rubberDuck.h"

#include <iostream>
using std::cout;
using std::endl;

int main(){
    cout << "mallardDuck-------------------------" << endl;
    //create default MallarDuck on heap
    MallarDuck* mallardDuck = new MallarDuck();   
    mallardDuck->display();
    mallardDuck->performFly();
    mallardDuck->performQuack();
    // change behavior in runtime
    mallardDuck->setFlyBehavior(new FlyNewWay());
    mallardDuck->performFly();

    cout << "the other way to create MallarDuck-----------" << endl;
    // create custom MallarDuck on stack.
    MallarDuck rocketDuck =  MallarDuck(new FlyWthRocket(), new NewQuack());
    rocketDuck.display();
    rocketDuck.performFly();
    rocketDuck.performQuack();

    cout << "rubberDuck duck--------------------" << endl;
    RubberDuck rubberDuck;
    rubberDuck.display();
    rubberDuck.performFly();
    rubberDuck.performQuack();
    
        
    delete mallardDuck;     // TBD: when delete object on the heap, 
                            // will delete member object which also create by new operator
                            // in constructor?
    cout << "in main, before return 0" << endl;

    return 0;
}