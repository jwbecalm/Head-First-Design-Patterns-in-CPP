#include "MallarDuck.h"

#include <iostream>
using std::cout;
using std::endl;


MallarDuck::~MallarDuck(){
    cout << "in MallarDuck::~MallarDuck()" << endl;
}

void MallarDuck::display(){
    cout << "in MallarDuck::display()"<< endl;
}

