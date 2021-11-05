#include "PizzaStore.h"

#include <iostream>
#include <string>
using namespace std;
#include "ChicagoPizzaStore.h"
#include "NYPizzaStore.h"

int main(){

    // PizzaStore is abstract class, cannot be instantiate. use pointer
    PizzaStore* nyStore = new NYPizzaStore();
    Pizza* pizza1 = nyStore->orderPizza("cheese");
    cout << "----------------------------------------" << endl;
    Pizza* pizza2 = nyStore->orderPizza("veggie");  
    cout << "----------------------------------------" << endl;
    delete nyStore;
    delete pizza1;
    delete pizza2;


    PizzaStore* chicagoStore = new ChicagoPizzaStore();
    Pizza* pizza3 = chicagoStore->orderPizza("cheese");
    cout << "----------------------------------------" << endl;
    Pizza* pizza4 = chicagoStore->orderPizza("veggie");
    cout << "----------------------------------------" << endl;
    delete chicagoStore;
    delete pizza3;
    delete pizza4;
    
    

    return 0;
}