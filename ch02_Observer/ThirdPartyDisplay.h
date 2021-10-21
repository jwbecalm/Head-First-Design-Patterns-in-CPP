#ifndef THIRDPARTYDISPLAY_H
#define THIRDPARTYDISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"
class ThirdPartyDisplay: public Observer, DisplayElement{
    private:
    float m_temperature;
    float m_humidity;
    WeatherData* m_weatherData;
    public:
    ThirdPartyDisplay(WeatherData* m_weatherData);
    void update();
    void display();    
};

#endif