#include <iostream>
#include "Shop.h"
#include "Product.h"
#include "Customer.h"
#include "operator.h"
using namespace std;

int main() {
    Product Product1 = Product();
    const Shop Shop1 = Shop();


    Customer::customersFoo();
    cout << "\n\n";
    Customer Customer1;
    cin >> Customer1;
    cout << "\n-----------------------------------\n";
    cout << Customer1;
    cout<<" bought ";
    Product1.printName();
    cout<<" at ";
    Shop1.printUrl();
    cout<<endl;
    cout << "-----------------------------------\n\n";

    Customer::customersFoo();

    Customer Customer2{Customer1};
    cout << "\n-----------------------------------\n";
    cout << Customer2;
    cout<<" bought ";
    Product1.printName();
    cout<<" at ";
    Shop1.printUrl();
    cout<<endl;
    cout << "-----------------------------------\n\n";

    Customer::customersFoo();


    Customer Customer3;
    cout << "\n\n";
    cin >> Customer3;
    cout << "\n-----------------------------------\n";
    cout << Customer3;
    cout<<" bought ";
    Product1.printName();
    cout<<" at ";
    Shop1.printUrl();
    cout<<endl;
    cout << "-----------------------------------\n\n";

    Customer::customersFoo();

    Customer Customer4 = move(Customer3);


    cout << "\n-----------------------------------\n";
    cout << Customer4;
    cout<<" bought ";
    Product1.printName();
    cout<<" at ";
    Shop1.printUrl();
    cout<<endl;
    cout << "-----------------------------------\n\n";

    Customer::customersFoo();

    cout << "\n\n\n";

    const Operator p1{1, 2};
    Operator p2 = +p1;


    cout << p2.showUnary() << endl;

    const Operator v1{1, 2}, v2{3, 4};
    Operator v3 = v1 + v2;

    cout << v3.showBinary() << endl;

    return 0;
}