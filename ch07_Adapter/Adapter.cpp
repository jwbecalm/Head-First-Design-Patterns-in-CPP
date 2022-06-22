#include <iostream>
using namespace  std;

#include "Adapter.h"

Adapter::Adapter(Adaptee* adaptee):
        m_adptee(adaptee)
{
        cout << "Adapter(Adaptee* adaptee)" << endl;
}

Adapter::~Adapter(){
        cout << "Adapter::~Adapter()" << endl;
}

void Adapter::request() {
    cout << "Adapter::request()" << endl;
    // 2. 适配器(Adapter)委托被适配者（Adaptee）,把请求转化成Adaptee的实现
    m_adptee->specificRequest();
    cout << endl;
}