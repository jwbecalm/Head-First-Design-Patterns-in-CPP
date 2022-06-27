#include "LightOffCommand.h"

LightOffCommand::LightOffCommand(Light* light){
    this->m_light = light;
}

void LightOffCommand::execute(){
    m_light->off();
}
void LightOffCommand::undo(){
    m_light->on();
}
