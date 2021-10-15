#include "QuackBehavior.h"

#include <iostream>
using std::cout;
using std::endl;

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