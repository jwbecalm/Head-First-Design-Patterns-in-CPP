#include "FlyBehavior.h"

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