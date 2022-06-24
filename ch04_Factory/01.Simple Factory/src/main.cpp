#include "../inc/PizzaStore.h"
#include "../inc/SimplePizzaFactory.h"
#include <iostream>
#include <string>
using namespace std;


int main(){
    SimplePizzaFactory simplePizzaFactory = SimplePizzaFactory();

    PizzaStore pizzaStore(&simplePizzaFactory);

    Pizza* pizzaCheese = pizzaStore.orderPizza("cheese");

    Pizza* pizzaVeggie = pizzaStore.orderPizza("veggie");

    delete pizzaCheese;
    delete pizzaVeggie;

    return 0;
}