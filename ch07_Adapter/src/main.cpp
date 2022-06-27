#include <iostream>
using namespace  std;

#include "Adaptee.h"
#include "Adapter.h"
#include "Target.h"

/**
 * The client code supports all classes that follow the Target interface.
 */
void ClientCode(Target* target) {
    target->request();
}


int main(){
    cout << "ClentCode can work fine with Target object interface: reqeust()" << endl;
    Target *target1 = new Target();
    ClientCode(target1);
    cout << endl << endl;

    cout << "but ClentCode can't work with Adaptee's specificRequest()" << endl;
    Adaptee* adaptee = new Adaptee();
    Target* adapter = new Adapter(adaptee);  // Before constructing a derived class, a constructor of the base class is called
    // 1. ClientCode委托Adapter, 调用Adapter的request方法，对适配器Adaptee发出请求
    cout << "ClientCode delegate Adapter, to invoke Adapter's request() method" << endl;
    ClientCode(adapter);
    

    delete adaptee;
    delete adapter;
    delete target1;

    // object of abstract class type "Target" is not allowed
    // Target* target = new Target();
    // but we can define constructor for abstract class, for generral purpose for all sub classes.
    
    return 0;
}