#include "ChicagoStyleCheesePizza.h"

#include <iostream>
using std:: cout;
using std:: endl;

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza(){
    setName("ChicagoStyleCheesePizza");
}

ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza(){
    cout << "~ChicagoStyleCheesePizza()" << endl;
}

void ChicagoStyleCheesePizza::cut(){
    cout << "ChicagoStyleCheesePizza::cut(): custom cut" << endl;
}