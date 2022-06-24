#include "Beverage.h"
#include <iostream>
using std::cout;
using std::endl;

Beverage::Beverage(){
    m_description = "unknown";
}

Beverage::~Beverage(){
    cout << "Beverage::~Beverage(), m_description = " << this->getDescription() << endl;
}

string Beverage::getDescription(){
    return m_description;
}