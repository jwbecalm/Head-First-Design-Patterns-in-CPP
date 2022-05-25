#include <iostream>
#include <string>
#include "Singleton.h"

using namespace std;



//Singleton* Singleton::m_instance = nullptr;     // if no this code, compile error: undefined reference to `Singleton::m_instance'
                                                // https://stackoverflow.com/questions/17799134/c-singleton-undefined-reference-to
int main(){
    
    //int value  = Singleton::getInstance()->getValue();
    int value  = Singleton::getInstance().getValue();
    
    cout << "value = " << value << endl;

    return 0;
}