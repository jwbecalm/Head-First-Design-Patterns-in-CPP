#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

#include "Command.h"
#include <vector>

using namespace std;

class RemoteControl{
    private:
    // 保存Command对象的指针
    Command* m_onCommands[7];
    Command* m_offCommands[7];

    public:
    // 默认构造函数
    RemoteControl();


    // 设置某个槽位的开、关命令
    void setCommand(int slot, Command* onCommand, Command* offCommand);
    
    // 某个槽位的"开"被按下时，执行该槽位上绑定的onCommand对象的execute方法
    void onButtonPressed(int slot);
    
    // 某个槽位的"关"被按下时，执行该槽位上绑定的OffCommand对象的execute方法 
    void offButtonPressed(int slot);
    
    // TBD: add undo

};

#endif // REMOTECONTROL_H