#ifndef OBSERVALBLE_H
#define OBSERVALBLE_H

#include "Observer.h"

class Obserbalble{
    public:
    // 观察者使用该接口注册自己（订阅服务）
    virtual void addObserver(Observer* observer) = 0;
    // 观察者使用该接口删除自己（取消订阅）
    virtual void removeObserver(Observer* observer) = 0;
    // 当被观察者某个状态发生变化时，调用该接口通知所有的观察者
    virtual void notifyObservers() = 0;

};

#endif