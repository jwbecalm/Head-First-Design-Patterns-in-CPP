#include <iostream>
using std::cout;
using std::endl;

#include "WeatherData.h"

WeatherData::WeatherData():
    m_temperature(0),
    m_humidity(0),
    m_pressure(0){
    // m_observers already initialized by its default constructor
    }

WeatherData::~WeatherData(){
    cout << "in WeatherData::~WeatherData()" << endl;
}
void WeatherData::addObserver(Observer* observer){
    m_observers.push_back(observer);
}

void WeatherData::removeObserver(Observer* observer){
    m_observers.remove(observer);
}

void WeatherData::notifyObservers(){
    for(auto iter = m_observers.begin(); iter != m_observers.end(); ++iter){
        (*iter)->update();
    }
}


void WeatherData::measurementChanged(){
    // when weather data changed, notify all observers
    notifyObservers();
}

void WeatherData::setWeatherData(float temp, float humid, float pres){
    m_temperature = temp;
    m_humidity = humid;
    m_pressure = pres;
    measurementChanged();
}

float WeatherData::getTemperature(){
    return m_temperature;
}
float WeatherData::getHumidity(){
    return m_humidity;
}
float WeatherData::getPressure(){
    return m_pressure;
}
