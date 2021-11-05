#include "PizzaStore.h"
#include "Pizza.h"
#include <string>
using std::string;

Pizza* PizzaStore::orderPizza(string type){
    Pizza* pizza;
    pizza = createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}