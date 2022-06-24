#include "Espresso.h"
#include <iostream>
using std::cout;
using std::endl;
Espresso::Espresso()
{
    m_description = "Espresso";
}
Espresso::~Espresso()
{
    cout << "Espresso::~Espresso()" << endl;
}
double Espresso::cost(){
    return 0.98;
}