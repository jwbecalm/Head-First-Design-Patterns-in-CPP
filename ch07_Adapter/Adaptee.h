#ifndef ADAPTEE_H
#define ADAPTEE_H
#include <iostream>
using namespace  std;

class Adaptee{
    public:
    Adaptee(){
        cout << "Adaptee::Adaptee()" << endl;
    }
    ~Adaptee(){
        cout << "Adaptee::~Adaptee()" << endl;
    }
    void specificRequest(){
        cout << "Adaptee::specificRequest()" << endl;
    }
};

#endif // ADAPTEE_H