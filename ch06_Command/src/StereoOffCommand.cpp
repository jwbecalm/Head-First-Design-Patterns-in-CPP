#include "StereoOffCommand.h"

StereoOffCommand::StereoOffCommand(Stereo* stereo){
    this->m_stereo = stereo;
}

void StereoOffCommand::execute(){
    m_stereo->off();
}
void StereoOffCommand::undo(){
    m_stereo->on();
    m_stereo->playCD();
    m_stereo->setVolume(11);
}