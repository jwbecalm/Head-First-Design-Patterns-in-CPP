#include <iostream>
using namespace  std;

#include "CaffeineBeverage.h"
#include "Coffe.h"
#include "Tea.h"

int main(){
    cout << "making Coffe..." << endl;
    Coffe coffe;
    coffe.prepareRecipe();

    cout << "making Tee..." << endl;
    Tea tea;
    tea.prepareRecipe();

    return 0;
}