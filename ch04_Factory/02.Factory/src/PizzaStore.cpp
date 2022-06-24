#include "PizzaStore.h"
#include "Pizza.h"
#include <string>
using std::string;

// orderPizza（）并不知道真正创建的是哪一种比萨，只知道这是一个披萨，
// 该披萨可以被prepare, bake, cut, box
Pizza* PizzaStore::orderPizza(string type){
    Pizza* pizza;
    // createPizza为工厂方法，该方法将对象的创建与客户代码（oriderPizza隔离开来）
    pizza = createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}