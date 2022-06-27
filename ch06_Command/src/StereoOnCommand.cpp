#include "StereoOnCommand.h"

StereoOnCommand::StereoOnCommand(Stereo* stereo){
    this->m_stereo = stereo;
}

void StereoOnCommand::execute(){
    m_stereo->on();
    m_stereo->playCD();
    m_stereo->setVolume(11);
}
void StereoOnCommand::undo(){
    m_stereo->off();
}