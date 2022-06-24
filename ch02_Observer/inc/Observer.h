#ifndef OBSERVER_H
#define OBSERVER_H

class Observer{
    public:
    // 当被观察者发生变化时，被调用
    virtual void update() = 0;
};

#endif