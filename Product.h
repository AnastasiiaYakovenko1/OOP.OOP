#include <iostream>
using namespace std;

class Product {
private:
    std::string name;
public:
    double price;

    Product();
    Product(string name, double price);
    ~Product(){};

    void setName(string newName);

    void printName();

    double getPrice();
};