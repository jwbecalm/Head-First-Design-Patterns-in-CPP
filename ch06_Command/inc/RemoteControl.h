#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

#include "Command.h"
#include <vector>

using namespace std;
#define MAX_NUM_BUTTON 7
class RemoteControl{
    private:
    // 保存Command对象的指针
    Command* m_onCommands[MAX_NUM_BUTTON];
    Command* m_offCommands[MAX_NUM_BUTTON];

    // 保存前一个命令，用于执行undo
    Command* m_undoCommand;

    public:
    // 默认构造函数
    RemoteControl();


    // 设置某个槽位的开、关命令
    void setCommand(int slot, Command* offCommand, Command* onCommand);
    
    // 某个槽位的"开"被按下时，执行该槽位上绑定的onCommand对象的execute方法
    void onButtonPressed(int slot);
    
    // 某个槽位的"关"被按下时，执行该槽位上绑定的OffCommand对象的execute方法 
    void offButtonPressed(int slot);
    
    // undo按钮，所有命令按钮共用一个undo按钮
    void undoButtonPressed();

};

#endif // REMOTECONTROL_H