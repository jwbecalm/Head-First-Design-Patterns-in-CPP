#include "Pizza.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

Pizza::Pizza(){
    m_name = "unknown";
    // cout << "in Pizza(). m_name = " << m_name << endl;
}
Pizza::~Pizza(){
    cout << "in ~Pizza()." << endl;
}
string Pizza::getName(){
    return m_name;
}
void Pizza::setName(string name){
    m_name = name;
}
void Pizza::prepare(){
    cout << "Pizza::prepare(): "<< getName() << ", standard prepare()" << endl;
}

void Pizza::bake(){
    cout << "Pizza::bake(): "   << getName() << ", standard bake()" << endl;
}
void Pizza::cut(){
    cout <<"Pizza::cut(): "     << getName() << ", standard cut()" << endl;
}
void Pizza::box(){
    cout << "Pizza::box(): "    << getName() << ", standard box()" << endl;
}
