#include <iostream>
#include <string>
#include <vector>

#include "Light.h"
#include "LightOffCommand.h"
#include "LightOnCommand.h"
#include "RemoteControl.h"

using namespace std;


int main(){
    // create receiver object
    Light* livingRoomLight = new Light("Living Room");

    // create command object
    LightOnCommand* livingRoomLightOn = new LightOnCommand(livingRoomLight);
    LightOffCommand* livingRoomLightOff = new LightOffCommand(livingRoomLight);

    // create invoker
    RemoteControl remoteControl;
    
    // set each slot for remoteControl
    remoteControl.setCommand(0,livingRoomLightOn, livingRoomLightOff);
    // other slot, TBD

    remoteControl.onButtonPressed(0);
    remoteControl.offButtonPressed(0);

    delete livingRoomLight;
    delete livingRoomLightOff;
    delete livingRoomLightOn;

    return 0;
}