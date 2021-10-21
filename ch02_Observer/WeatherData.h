#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "Observalble.h"
#include "Observer.h"
#include <list>

class WeatherData : public Obserbalble{
    private:
    float m_temperature;
    float m_humidity;
    float m_pressure;
    // 在remove observer时，需要随机删除容器中已有的一个成员，list性能较vector优
    std::list<Observer*> m_observers; // store a pointer for each Observer

    public:
    WeatherData();
    
    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void notifyObservers();

    void measurementChanged();
    void setWeatherData(float temp, float humid, float pres);
    float getTemperature();
    float getHumidity();
    float getPressure();
};

#endif