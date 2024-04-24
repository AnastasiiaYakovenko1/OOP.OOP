#include "Product.h"

void Product::printName()
{
    std::cout << name;
}

double Product::getPrice()
{
    return price;
}

Product::Product()
{
    name = "new product";
    price = 5;
}

Product::Product(string name, double price)
{
    this->name = name;
    this->price = price;
}

void Product::setName(string newName)
{
    name = newName;
}
