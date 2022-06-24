#include <iostream>
using std::cout;
using std::endl;

#include "ForecastDisplay.h"

ForecastDisplay::ForecastDisplay(WeatherData* weatherData):
    m_weatherData(weatherData){
    m_weatherData->addObserver(this);
}

void ForecastDisplay::update(){
    display();
}

void ForecastDisplay::display(){
    cout <<"in ForecastDisplay::display(), pressure = " << m_weatherData->getPressure() << endl;
}