#include "DuckBehavior.h"

#include <iostream>
using std::cout;
using std::endl;

void FlyWithWings::fly(){
    cout << "Fly with wings." << endl;
}

void FlyNoWay::fly(){
    cout << "Can not fly, do nothing." << endl;
}

// 新增的Fly behavior 实现，和已有代码解耦
void NewFlyWay::fly(){
    cout << "Fly wiht new way." << endl;
}

// 实现类
void SimpleQuack::quack(){
    cout << "Quack with simple/normal way." << endl;
}
void MuteQuack::quack(){
    cout << "Mute, can not quack, do nothing." << endl;
}
void NewQuack::quack(){
    cout << "Quack with new way." << endl;
}
