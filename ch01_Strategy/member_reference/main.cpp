#include "MallarDuck.h"
#include "rubberDuck.h"

#include <iostream>
using std::cout;
using std::endl;

int main(){
    cout << "\ncreate MallarDuck on stack-----------" << endl;
    // create custom MallarDuck on stack.
    FlyWithWings* flyWithWings = new FlyWithWings();
    SimpleQuack* simpleQuack = new SimpleQuack();
    MallarDuck mallarDuck(*flyWithWings, *simpleQuack);
    
    mallarDuck.display();
    mallarDuck.performFly();
    mallarDuck.performQuack();
    delete flyWithWings;
    delete simpleQuack;

   
    cout << "\nin main, before return 0" << endl;

    return 0;
}