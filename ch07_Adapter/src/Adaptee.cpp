#include "Adaptee.h"
#include <iostream>
using namespace  std;


Adaptee::Adaptee(){
    cout << "Adaptee::Adaptee()" << endl;
}

Adaptee::~Adaptee(){
    cout << "Adaptee::~Adaptee()" << endl;
}

void Adaptee::specificRequest(){
    cout << "Adaptee::specificRequest()" << endl;
}


