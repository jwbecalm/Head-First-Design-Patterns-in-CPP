#include "ChicagoStyleVeggiePizza.h"

#include <iostream>
using std:: cout;
using std:: endl;

ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza(){
    setName("ChicagoStyleVeggiePizza");
}
ChicagoStyleVeggiePizza::~ChicagoStyleVeggiePizza(){
    cout << "~ChicagoStyleVeggiePizza()" << endl;
}
void ChicagoStyleVeggiePizza::box(){
    cout << "ChicagoStyleVeggiePizza::box(): custom box" << endl;
}

