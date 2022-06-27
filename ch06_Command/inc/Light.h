#ifndef LIGHT_H
#define LIGHT_H

#include <string>
using namespace  std;

class Light{
    private:
    string m_lightName;

    public:
    Light();

    Light(string lightName);
    
    // action of receiver:
    void on();
    void off();
};

#endif // LIGHT_H