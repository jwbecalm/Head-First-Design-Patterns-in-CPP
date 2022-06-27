#include "Stereo.h"
#include <iostream>

#include <string>
using namespace  std;

Stereo::Stereo(){
     cout << "Stereo::Stereo()" << endl;
}

void Stereo::off(){
    cout << "Stereo::off()" << endl;
}

void Stereo::on(){
    cout << "Stereo::on()" << endl;
}

void Stereo::playCD(){
    cout <<"Stereo::playCD()" << endl;
}

void Stereo::setVolume(int volume){
    cout << "Stereo::setVolume(" << volume << ")" << endl;
}