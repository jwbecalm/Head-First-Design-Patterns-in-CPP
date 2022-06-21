#include "RubberDuck.h"

#include <iostream>
using std::cout;
using std::endl;

RubberDuck::~RubberDuck(){
    cout << "in RubberDuck::~RubberDuck()" << endl;
}

void RubberDuck::display(){
    cout << "in RubberDuck::display()"<< endl;
}
