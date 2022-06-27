#include "LightOnCommand.h"

LightOnCommand::LightOnCommand(Light* light){
    this->m_light = light;
}

void LightOnCommand::execute(){
    m_light->on();
}
void LightOnCommand::undo(){
    m_light->off();
}