#ifndef ADAPTER_H
#define ADAPTER_H

#include "Target.h"
#include "Adaptee.h"

#include <iostream>
using namespace  std;

class Adapter : public Target{
    private:
    Adaptee* m_adptee;

    public:
    Adapter(Adaptee* adaptee):
        m_adptee(adaptee)
    {
        cout << "Adapter(Adaptee* adaptee)" << endl;
    }

    ~Adapter(){
        cout << "Adapter::~Adapter()" << endl;
    }

    void request() override{
        cout << "Adapter::request()" << endl;
        m_adptee->specificRequest();
    }
};

#endif // ADAPTER_H