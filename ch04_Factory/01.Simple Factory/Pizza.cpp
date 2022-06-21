#include "Pizza.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

Pizza::Pizza(){
    m_name = "unknown";
    cout << "in Pizza(). m_name = " << m_name << endl;
}
Pizza::~Pizza(){
    cout << "in ~Pizza()" << endl << endl;
}
string Pizza::getName(){
    return m_name;
}
void Pizza::prepare(){
    cout << "Pizza::prepare(): " << getName() << ", prepare()" << endl;
}

void Pizza::bake(){
    cout << "Pizza::bake(): " << getName() << ", bake()" << endl;
}
void Pizza::cut(){
    cout << "Pizza::cut(): " << getName() << ", cut()" << endl;
}
void Pizza::box(){
    cout << "Pizza::box(): " << getName() << ", box()" << endl;
}
