#ifndef PIZZA_H
#define PIZZA_H

#include <string>
using std::string;

class Pizza{
    private:
    string m_name;

    public:
    Pizza();
    virtual ~Pizza();   // set to virtual, ensure subclass deleted
    virtual void prepare();
    virtual void bake();
    virtual void cut();
    virtual void box();

    string getName();
    void setName(string name);
};

#endif