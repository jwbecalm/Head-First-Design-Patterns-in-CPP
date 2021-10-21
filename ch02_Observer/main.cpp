#include <iostream>
#include "WeatherData.h"
#include "CurrentDisplay.h"
#include "StatDisplay.h"
#include "ForecastDisplay.h"
#include "ThirdPartyDisplay.h"

int main(){
    WeatherData* weatherData = new WeatherData();

    CurrentDisplay*    cd = new CurrentDisplay(weatherData);
    StatDisplay*       sd = new StatDisplay(weatherData);
    ForecastDisplay*   fd = new ForecastDisplay(weatherData);
    ThirdPartyDisplay* td = new ThirdPartyDisplay(weatherData);

    weatherData->setWeatherData(32.1, 22.5, 45.8);

    delete weatherData;
    delete cd;
    delete sd;
    delete fd;
    delete td;
    
    return 0;
}