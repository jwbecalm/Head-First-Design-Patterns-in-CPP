#ifndef CURRENTDISPLAY_H
#define CURRENTDISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

// 观察者，当前值显示
class CurrentDisplay : public Observer, DisplayElement{
    private:
    WeatherData* m_weatherData;

    public:
    CurrentDisplay(WeatherData* m_weatherData);
    void update() override;
    void display() override;
};

#endif