#include <iostream>
using std::cout;
using std::endl;

#include "StatDisplay.h"

StatDisplay::StatDisplay(WeatherData* weatherData):
    m_weatherData(weatherData){
    m_weatherData->addObserver(this);
}

void StatDisplay::update(){
    display();
}

void StatDisplay::display(){
    cout <<"in StatDisplay::display(), humidity = " << m_weatherData->getHumidity() << endl;
}