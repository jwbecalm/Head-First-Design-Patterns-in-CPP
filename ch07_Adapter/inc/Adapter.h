#ifndef ADAPTER_H
#define ADAPTER_H

#include "Target.h"
#include "Adaptee.h"



class Adapter : public Target{
    private:
    Adaptee* m_adptee;

    public:
    Adapter(Adaptee* adaptee);
   
    ~Adapter();
    // 
    void request() override;
};

#endif // ADAPTER_H