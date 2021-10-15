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
void FlyWthRocket::fly(){
    cout << "Fly with Rocket!!!!." << endl;
}


// 新增的Fly behavior 实现，和已有代码解耦。
// 这里为简化实现，放在了同一个.cpp, .h文件里
void NewFlyWay::fly(){
    cout << "Fly wiht new way." << endl;
}