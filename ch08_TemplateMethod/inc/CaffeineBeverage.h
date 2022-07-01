#ifndef ADAPTER_H
#define ADAPTER_H

class CaffeineBeverage{
    public:
    // template method, make sure that it cannot be overridden
    virtual void prepareRecipe() final; 

    // general method, implement in parent class:CaffeineBeverage
    void boilWater();
    // general method, implement in parent class:CaffeineBeverage
    void pourInCup();

    // interface/specific method, subclass must implements by itself
    virtual void brew() = 0;
    // interface/specific method, subclass must implements by itself
    virtual void addCondiments() = 0;

    // hook method, has default implementation
    virtual bool CustomerWantCondiments();
};


#endif // ADAPTER_H