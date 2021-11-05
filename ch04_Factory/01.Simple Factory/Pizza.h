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
    void prepare();
    void bake();
    void cut();
    void box();
};

#endif