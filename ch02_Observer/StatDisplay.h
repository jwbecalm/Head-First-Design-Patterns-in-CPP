#ifndef STATDISPLAY_h
#define STATDISPLAY_h

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"
class StatDisplay: public Observer, DisplayElement{
    private:
    float m_humidity;
    WeatherData* m_weatherData;
    public:
    StatDisplay(WeatherData* m_weatherData);
    void update();
    void display();
};

#endif