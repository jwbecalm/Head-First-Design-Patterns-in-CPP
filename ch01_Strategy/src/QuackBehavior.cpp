#include "QuackBehavior.h"

#include <iostream>
using std::cout;
using std::endl;

// 实现类
void SimpleQuack::quack(){
    cout << "in SimpleQuack::quack(), Quack with simple/normal way." << endl;
}
void MuteQuack::quack(){
    cout << "in MuteQuack::quack(), Mute, can not quack, do nothing." << endl;
}
void NewQuack::quack(){
    cout << "in NewQuack::quack(), Quack with new way." << endl;
}