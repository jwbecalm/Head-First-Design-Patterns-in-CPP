#include "CaffeineBeverage.h"
#include <iostream>
using namespace  std;

// template method 提供一个算法的框架，必须的步骤；
// 其中公共的功能可以在父类实现，子类特有的功能通过多态调用子类方法实现
void CaffeineBeverage::prepareRecipe(){
    // setp1, general
    boilWater();
    // step2, specific
    brew();
    // step3, general
    pourInCup();
    // step4, optional；可选的步骤，可以设计为钩子，让子类选择是否执行该步骤。
    // 这里很cool，由子类的实现来决定是否执行父类的某个步骤/方法
    if(CustomerWantCondiments()){
        addCondiments();    // 接口方法，父类无实现，子类必须覆盖并提供自己的实现
    }
}

void CaffeineBeverage::boilWater(){
    cout << "CaffeineBeverage::boilWater()" << endl;
}

void CaffeineBeverage::pourInCup(){
    cout << "CaffeineBeverage::pourInCup()" << endl;
}

// 钩子函数，提供一个默认实现。
// 子类也可以:
// 1. 采用父类的实现; 
// 2. 子类自己实现，默认返回true;
// 3. 子类自己实现，从终端输入true或false
// 4. xxx
bool CaffeineBeverage::CustomerWantCondiments(){
    return false;   // default no condiments
}