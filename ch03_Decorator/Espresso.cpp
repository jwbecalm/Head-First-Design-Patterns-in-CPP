#include "Espresso.h"
#include <iostream>
using std::cout;
using std::endl;
Espresso::Espresso()
{
    m_description = "Espresso";
}

double Espresso::cost(){
    return 0.98;
}