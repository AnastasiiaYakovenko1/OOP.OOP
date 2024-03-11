#include <string.h>
#include <iostream>

class Product {
private:
    std::string name;
public:
    double price;

    Product();

    Product(std::string n, double p);

    ~Product();

    void setName(std::string newName);

    void printName();

    double getPrice();
};