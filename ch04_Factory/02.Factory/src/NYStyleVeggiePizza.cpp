#include "NYStyleVeggiePizza.h"

#include <iostream>
using std:: cout;
using std:: endl;
NYStyleVeggiePizza::NYStyleVeggiePizza(){
    setName("NYStyleVeggiePizza");
}
NYStyleVeggiePizza::~NYStyleVeggiePizza(){
    cout << "~NYStyleVeggiePizza()" << endl;
}
void NYStyleVeggiePizza::bake(){
    cout << "NYStyleVeggiePizza::bake(): custom bake" << endl;
}