#include <iostream>
using std::cout;
using std::endl;

#include "ThirdPartyDisplay.h"


ThirdPartyDisplay::ThirdPartyDisplay(WeatherData* weatherData):
    m_weatherData(weatherData){
    m_weatherData->addObserver(this);
}
void ThirdPartyDisplay::update(){
    display();
}

void ThirdPartyDisplay::display(){
    cout <<"in ThirdPartyDisplay::display(), temperature = " << m_weatherData->getTemperature() << ", humidity = " << m_weatherData->getHumidity() << endl;
}