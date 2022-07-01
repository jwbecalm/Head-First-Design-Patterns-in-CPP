#include "Tea.h"
#include <iostream>
using namespace  std;

void Tea::brew(){
    cout << "Tea::brew()" << endl;
}

void Tea::addCondiments(){
    cout << "Tea::addCondiments()" << endl;
}

bool Tea::CustomerWantCondiments(){
    string isCustomerWantCondiments;

    // let customer decide whether add condiments? manual input the true or false
    cout <<"would you like milk and suger with your tea(y/n)?";
   
    cin >>isCustomerWantCondiments;
    if (isCustomerWantCondiments == "y"){
        return true;
    }
    else{
        return false;
    }
}