#ifndef TARGET_H
#define TARGET_H
#include <iostream>
using namespace  std;

class Target{
    public:
    Target(){
        cout << "Target::Target()" << endl;
    }

    virtual ~Target(){
        cout << "Target::~Target()" << endl;
    }

    virtual void request();

};

#endif // TARGET_H