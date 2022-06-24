#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>
// <string.h> is the old C header. C++ provides <string>, and then it should be referred to as std::string
using std::string;

class Beverage{
    protected:
    string m_description;
    
    public:
    Beverage();
    virtual ~Beverage();

    virtual string getDescription();    // must be virtual 
    virtual double cost() = 0;

};

#endif