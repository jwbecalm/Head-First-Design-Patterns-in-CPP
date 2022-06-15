#include "Coffe.h"
#include <iostream>
using namespace  std;

void Coffe::brew(){
    cout << "Coffe::brew()" << endl;
}

void Coffe::addCondiments(){
    cout << "Coffe::addCondiments()" << endl;
}

bool Coffe::CustomerWantCondiments(){
    // assume Coffe customer always like milk as condiment
    return true;
}