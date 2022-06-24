#include "ChicagoPizzaStore.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStyleVeggiePizza.h"

Pizza* ChicagoPizzaStore::createPizza(string type){
    Pizza* pizza;
    if (type == "cheese"){
        pizza =  new ChicagoStyleCheesePizza();
    }
    else if (type == "veggie"){
        pizza = new ChicagoStyleVeggiePizza();
    }
    return pizza;
}