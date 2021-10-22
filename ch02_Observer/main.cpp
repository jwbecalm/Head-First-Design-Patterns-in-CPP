#include <iostream>
#include "WeatherData.h"
#include "CurrentDisplay.h"
#include "StatDisplay.h"
#include "ForecastDisplay.h"
#include "ThirdPartyDisplay.h"

int main(){
    // create object on heap
    // WeatherData* weatherData = new WeatherData();
    // CurrentDisplay*    cd = new CurrentDisplay(weatherData);
    // StatDisplay*       sd = new StatDisplay(weatherData);
    // ForecastDisplay*   fd = new ForecastDisplay(weatherData);
    // ThirdPartyDisplay* td = new ThirdPartyDisplay(weatherData);

    // weatherData->setWeatherData(32.1, 22.5, 45.8);

    // delete weatherData;
    // delete cd;
    // delete sd;
    // delete fd;
    // delete td;

    // create object on stack
    WeatherData weatherData;
    CurrentDisplay cd = CurrentDisplay(&weatherData);
    StatDisplay sd = StatDisplay(&weatherData);
    ForecastDisplay fd = ForecastDisplay(&weatherData);
    ThirdPartyDisplay td = ThirdPartyDisplay(&weatherData);

    weatherData.setWeatherData(39.8, 17.2, 63.2);

    return 0;
}