#include "Light.h"
#include <iostream>

#include <string>
using namespace  std;

Light::Light(){
    this->m_lightName = "";
}

Light::Light(string lightName){
    this->m_lightName = lightName;
    cout << "Light::Light(" << lightName << ")" << endl;
}

void Light::off(){
    cout << "Light::off(): " << m_lightName << endl;
}

void Light::on(){
    cout << "Light::on(): " << m_lightName << endl;
}