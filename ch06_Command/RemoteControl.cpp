
#include "RemoteControl.h"
#include "NoCommand.h"
#include <vector>
#include <memory>
#include <iostream>

using namespace std;
#define NO_COMMAND nullptr
#define MAX_NUM_BUTTON 7

RemoteControl::RemoteControl(){
    // 所有按钮初始化为noCommand(null object)
    Command *noCommand = new NoCommand();
    for(int i = 0; i < 7; i++)
    {   
        m_onCommands[i] = noCommand;
        m_offCommands[i] = noCommand;
    }
}


void RemoteControl::setCommand(int slot, Command* onCommand, Command* offCommand){
    cout << "RemoteControl::setCommand(), slot " << slot << endl;
    m_offCommands[slot] = offCommand;
    m_onCommands[slot] = onCommand;
}

void RemoteControl::onButtonPressed(int slot){
    cout << "RmoteControl::onButtonPressed(), slot " << slot << " was pressed." << endl;
    m_onCommands[slot]->execute();
}

void RemoteControl::offButtonPressed(int slot){
    cout << "RmoteControl::offButtonPressed(), slot " << slot << " was pressed." << endl;
    m_offCommands[slot]->execute();
}

