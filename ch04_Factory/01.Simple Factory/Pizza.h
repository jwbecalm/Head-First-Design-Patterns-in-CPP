#ifndef PIZZA_H
#define PIZZA_H

#include <string>
using std::string;

class Pizza {
    protected:
    string m_name;

    public:
    Pizza();
    virtual ~Pizza();
    string getName();
    virtual void prepare();
    virtual void bake();
    virtual void cut();
    virtual void box();
};

#endif