#ifndef ADAPTER_H
#define ADAPTER_H

class CaffeineBeverage{
    public:
    virtual void prepareRecipe() final; // make sure that it cannot be overridden
    void boilWater();
    void pourInCup();
    virtual void brew() = 0;
    virtual void addCondiments() = 0;
    virtual bool CustomerWantCondiments();    // has default implementation
};


#endif // ADAPTER_H