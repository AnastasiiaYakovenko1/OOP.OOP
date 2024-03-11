#include "Product.h"

void Product::printName() {
    std::cout << name;
}

double Product::getPrice() {
    return price;
}

Product::Product() {
    name = "new product";
    price = 5;
}

Product::Product(std::string n, double p) {
    name = n;
    price = p;
}

Product::~Product() {}

void Product::setName(std::string newName) {
    name = newName;
}
