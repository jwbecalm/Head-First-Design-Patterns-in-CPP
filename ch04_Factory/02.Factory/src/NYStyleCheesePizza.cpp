#include "NYStyleCheesePizza.h"

#include <iostream>
using std:: cout;
using std:: endl;

NYStyleCheesePizza::NYStyleCheesePizza(){
    setName("NYStyleCheesePizza");
}
NYStyleCheesePizza::~NYStyleCheesePizza(){
    cout << "~NYStyleCheesePizza()" << endl;
}
void NYStyleCheesePizza::prepare(){
    cout << "NYStyleCheesePizza::prepare(): custom prepare" << endl;
}