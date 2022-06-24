#include "../inc/Pizza.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

Pizza::Pizza(){
    m_name = "unknown";
    cout << "in Pizza()'s default constructor, m_name = " << m_name << endl;
}
Pizza::~Pizza(){
    cout << "in ~Pizza()" << endl << endl;
}
string Pizza::getName(){
    return m_name;
}
void Pizza::prepare(){
    cout << "in Pizza::prepare(), begin to prepare: " << getName() << endl;
}

void Pizza::bake(){
    cout << "in Pizza::bake(), begin to bake: " << getName() << endl;
}
void Pizza::cut(){
    cout << "in Pizza::cut(), begin to cut: " << getName() << endl;
}
void Pizza::box(){
    cout << "in Pizza::box(), begin to box: " << getName() << endl;
}
