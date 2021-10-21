#ifndef CURRENTDISPLAY_H
#define CURRENTDISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

class CurrentDisplay : public Observer, DisplayElement{
    private:
    float m_temperature;
    WeatherData* m_weatherData;

    public:
    CurrentDisplay(WeatherData* m_weatherData);
    void update();
    void display();
};

#endif