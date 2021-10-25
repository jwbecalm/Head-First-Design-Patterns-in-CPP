#include "Beverage.h"
#include <iostream>
using std::cout;
using std::endl;

Beverage::Beverage(){
    m_description = "unknown";
}

string Beverage::getDescription(){
    return m_description;
}