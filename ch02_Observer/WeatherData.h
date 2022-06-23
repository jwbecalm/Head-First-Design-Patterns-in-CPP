#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "Observalble.h"
#include "Observer.h"
#include <list>

// 被观察者，当天气数据发生变化时，通知所有的观察者
class WeatherData : public Obserbalble{
    private:
    float m_temperature;
    float m_humidity;
    float m_pressure;
    
    // store a pointer for each Observer
    std::list<Observer*> m_observers;   // 在remove observer时，需要随机删除容器中已有的一个成员，list性能较vector优

    public:
    WeatherData();
    ~WeatherData();
    
    void addObserver(Observer* observer) override;
    void removeObserver(Observer* observer) override;
    void notifyObservers() override;

    // interface provided by Weather Station, when weather data changed, this method will be called
    void measurementChanged();

    // simulate weaher data changed
    void setWeatherData(float temp, float humid, float pres);

    float getTemperature();
    float getHumidity();
    float getPressure();
};

#endif