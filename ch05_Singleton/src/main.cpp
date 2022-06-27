#include <iostream>
#include <string>
#include "Singleton.h"

using namespace std;



Singleton* Singleton::m_instance = nullptr;     // if no this code, compile error: undefined reference to `Singleton::m_instance'
                                                // https://stackoverflow.com/questions/17799134/c-singleton-undefined-reference-to
int main(){
    Singleton* s1 = Singleton::getInstance(100);
    s1->test();

    Singleton* s2 = Singleton::getInstance(101);
    s1->test();

    // Singleton* s3 = new Singleton(102);     // 构造好函数为私有，不能在类的外部，被new出来, compile error:
                                            // "Singleton::Singleton(int value)" is inaccessible

    // Singleton s3 = *s2;     // compile error 
                            // "Singleton::Singleton(const Singleton &other)" cannot be referenced -- it is a deleted function


    return 0;
}