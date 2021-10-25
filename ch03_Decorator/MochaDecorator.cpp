#include "MochaDecorator.h"
#include <iostream>
using std::cout;
using std::endl;

MochaDecorator::MochaDecorator(Beverage* beverage):
    m_beverage(beverage){
    }

double MochaDecorator::cost(){
    return m_beverage->cost() + 0.2;
}

string MochaDecorator::getDescription(){
    return m_beverage->getDescription() + " + Mocha";
}