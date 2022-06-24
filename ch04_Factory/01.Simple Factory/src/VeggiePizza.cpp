#include "../inc/VeggiePizza.h"
#include <iostream>
using namespace std;

VeggiePizza::VeggiePizza(){
    m_name = "Veggie Pizza";
}

VeggiePizza::~VeggiePizza(){
    cout << "in ~VeggiePizza()" << endl;
}

void VeggiePizza:: box(){
    cout << "in VeggiePizza::box(), begin to specific box: " << getName() << endl;
}