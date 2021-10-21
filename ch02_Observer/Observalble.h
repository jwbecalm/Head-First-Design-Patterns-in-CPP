#ifndef OBSERVALBLE_H
#define OBSERVALBLE_H

#include "Observer.h"

class Obserbalble{
    public:
    virtual void addObserver(Observer* observer) = 0;
    virtual void removeObserver(Observer* observer) = 0;
    virtual void notifyObservers() = 0;

};

#endif