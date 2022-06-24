#include "Decaf.h"
#include <iostream>
using std::cout;
using std::endl;

Decaf::Decaf(){
    m_description = "Decaf";
}
Decaf::~Decaf(){
    cout << "Decaf::~Decaf()" << endl;
}
double Decaf::cost(){
    return 1.99;
}