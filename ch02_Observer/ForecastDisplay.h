#ifndef FORECASTDISPLAY_H
#define FORECASTDISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"
class ForecastDisplay: public Observer, DisplayElement{
    private:
    float m_pressure;
    WeatherData* m_weatherData;
    public:
    ForecastDisplay(WeatherData* m_weatherData);
    void update();
    void display();
};

#endif