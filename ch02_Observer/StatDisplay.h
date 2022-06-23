#ifndef STATDISPLAY_h
#define STATDISPLAY_h

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

// 观察者，统计值显示
class StatDisplay: public Observer, DisplayElement{
    private:
    WeatherData* m_weatherData;
    
    public:
    StatDisplay(WeatherData* m_weatherData);
    void update();
    void display();
};

#endif