#include "MilkDecorator.h"
#include <iostream>
using std::cout;
using std::endl;

MilkDecorator::MilkDecorator(Beverage* beverage):
    m_beverage(beverage){
    }

double MilkDecorator::cost(){
    return m_beverage->cost() + 0.5;
}

string MilkDecorator::getDescription(){
    return m_beverage->getDescription() + " + Milk";
}