#include "MilkDecorator.h"
#include <iostream>
using std::cout;
using std::endl;

MilkDecorator::MilkDecorator(Beverage* beverage):
    m_beverage(beverage){
    }

MilkDecorator::~MilkDecorator(){
    cout << "MilkDecorator::~MilkDecorator()" << endl;
    if (m_beverage != nullptr){
        delete m_beverage;
    }
    
}

double MilkDecorator::cost(){
    return m_beverage->cost() + 0.5;
}

string MilkDecorator::getDescription(){
    return m_beverage->getDescription() + " + Milk";
}