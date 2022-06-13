
#include "RemoteControl.h"
#include "NoCommand.h"
#include <vector>
#include <memory>
#include <iostream>

using namespace std;

RemoteControl::RemoteControl(){
    // 所有按钮初始化为noCommand(null object)
    Command *noCommand = new NoCommand();
    for(int i = 0; i < MAX_NUM_BUTTON; i++)
    {   
        m_onCommands[i] = noCommand;
        m_offCommands[i] = noCommand;
    }

    m_undoCommand = noCommand;
}


void RemoteControl::setCommand(int slot, Command* offCommand, Command* onCommand){
    cout << "RemoteControl::setCommand(), slot " << slot << endl;
    m_offCommands[slot] = offCommand;
    m_onCommands[slot] = onCommand;
}

void RemoteControl::onButtonPressed(int slot){
    cout << "RmoteControl::onButtonPressed(), slot " << slot << " was pressed." << endl;
    m_onCommands[slot]->execute();

    // 按下某个按钮时，保存该按钮对应的命令，用于Undo
    m_undoCommand = m_onCommands[slot];
}

void RemoteControl::offButtonPressed(int slot){
    cout << "RmoteControl::offButtonPressed(), slot " << slot << " was pressed." << endl;
    m_offCommands[slot]->execute();

     // 按下某个按钮时，保存该按钮对应的命令，用于Undo
    m_undoCommand = m_offCommands[slot];
}

void RemoteControl::undoButtonPressed(){
    cout << "RemoteControl::undoButtonPressed()" << endl;
    m_undoCommand->undo();
}

