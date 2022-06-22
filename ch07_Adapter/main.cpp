#include <iostream>
using namespace  std;

#include "Adaptee.h"
#include "Adapter.h"
#include "Target.h"

int main(){
    Adaptee* adaptee = new Adaptee();
    Target* target = new Adapter(adaptee);  // Before constructing a derived class, a constructor of the base class is called
    // 1. 客户通过目标接口，调用适配器的request方法，对适配器发出请求
    target->request();

    delete adaptee;
    delete target;

    // object of abstract class type "Target" is not allowed
    // Target* target = new Target();
    // but we can define constructor for abstract class, for generral purpose for all sub classes.
    
    return 0;
}