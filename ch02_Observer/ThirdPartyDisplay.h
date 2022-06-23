#ifndef THIRDPARTYDISPLAY_H
#define THIRDPARTYDISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

// 观察者，第三方值显示
class ThirdPartyDisplay: public Observer, DisplayElement{
    private:
    WeatherData* m_weatherData;
    
    public:
    ThirdPartyDisplay(WeatherData* m_weatherData);
    void update() override;
    void display() override;    
};

#endif