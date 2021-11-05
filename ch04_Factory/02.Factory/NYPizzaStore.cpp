#include "NYPizzaStore.h"
#include "NYStyleCheesePizza.h"
#include "NYStyleVeggiePizza.h"


Pizza* NYPizzaStore::createPizza(string type){
    Pizza* pizza;
    if (type == "cheese"){
        pizza =  new NYStyleCheesePizza();
    }
    else if (type == "veggie"){
        pizza = new NYStyleVeggiePizza();
    }
    return pizza;
}