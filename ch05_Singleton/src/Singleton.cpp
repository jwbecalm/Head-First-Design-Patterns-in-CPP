#include "Singleton.h"

Singleton* Singleton::getInstance(int value){
    if(m_instance == nullptr){
        m_instance = new Singleton(value);
    }
    return m_instance;
}

int Singleton::getValue(){
    return m_value;
}

void Singleton::test(){
    cout << getValue() << endl;;
}