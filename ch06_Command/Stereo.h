#ifndef STEREO_H
#define STEREO_H

#include <string>
using namespace  std;

class Stereo{
    public:
    Stereo();
    
    // action of receiver:
    void on();
    void playCD();
    void setVolume(int volume);
    void off();
};

#endif // STEREO_H