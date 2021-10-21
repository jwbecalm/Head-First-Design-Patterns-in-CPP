#include <iostream>
using std::cout;
using std::endl;

#include "CurrentDisplay.h"

CurrentDisplay::CurrentDisplay(WeatherData* weatherData):
    m_weatherData(weatherData){
    m_weatherData->addObserver(this);
}

void CurrentDisplay::update(){
    display();
}

void CurrentDisplay::display(){
    cout <<"in CurrentDisplay::display(), temperature = " << m_weatherData->getTemperature() << endl;
}