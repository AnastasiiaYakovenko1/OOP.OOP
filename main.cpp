#include <iostream>
#include "Shop.h"
#include "Product.h"
#include "Customer.h"

using namespace std;

int main() {
    Customer c = Customer();
    c.printName();
    cout<<" bought ";
    Product p = Product();
    p.printName();
    cout<<" at ";
    Shop s = Shop();
    s.printUrl();
    cout<<endl;
    return 0;
}