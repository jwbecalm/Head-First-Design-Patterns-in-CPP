#include <iostream>
#include <string>
#include <vector>

#include "Light.h"
#include "LightOffCommand.h"
#include "LightOnCommand.h"
#include "RemoteControl.h"
#include "Stereo.h"
#include "StereoOffCommand.h"
#include "StereoOnCommand.h"

using namespace std;


int main(){
    // slot 0:--------------------------------------------------------------
    // create receiver object， 
    Light* livingRoomLight = new Light("Living Room");

    // create command object， 创建命令对象，绑定到livingRoomLight对象
    LightOnCommand* livingRoomLightOn = new LightOnCommand(livingRoomLight);
    LightOffCommand* livingRoomLightOff = new LightOffCommand(livingRoomLight);

    // create invoker
    RemoteControl remoteControl;
    
    // set each slot for remoteControl. 为遥控器的每个插槽设置/绑定对应的命令对象
    remoteControl.setCommand(0,livingRoomLightOff, livingRoomLightOn);

    remoteControl.onButtonPressed(0);
    remoteControl.offButtonPressed(0);
    remoteControl.undoButtonPressed();
    delete livingRoomLight;
    delete livingRoomLightOff;
    delete livingRoomLightOn;

    // slot1:-------------------------------------------------------------
    // slot1 是控制另一个房间的灯开、关。复用已有Light类即可，传入新的房间名
    Light* kitchenLight = new Light("Kitchen");
    LightOffCommand* kitchenLightOff = new LightOffCommand(kitchenLight);
    LightOnCommand* kitchenLightOn =   new LightOnCommand(kitchenLight);
    remoteControl.setCommand(1, kitchenLightOff, kitchenLightOn);
    remoteControl.onButtonPressed(1);
    remoteControl.offButtonPressed(1);
    remoteControl.undoButtonPressed(); 


    delete kitchenLight;
    delete kitchenLightOff;
    delete kitchenLightOn;

    // slot2:------------------------------------------------------------
    Stereo* stereo = new Stereo();
    StereoOffCommand* stereoOffCommand = new StereoOffCommand(stereo);
    StereoOnCommand* stereoOnCommand = new StereoOnCommand(stereo);
    remoteControl.setCommand(2, stereoOffCommand, stereoOnCommand);
    remoteControl.onButtonPressed(2);
    remoteControl.offButtonPressed(2);

    

    return 0;
}