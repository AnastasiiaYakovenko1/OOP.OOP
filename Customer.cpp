#include "Customer.h"

Customer::Customer() {
    name = "Nastya Yakovenko";
    orderCount = 0;
}

Customer::Customer(std::string name) {
    this->name = name;
    orderCount = 0;
}
Customer::Customer(std::string name, int orderCount) {
    this->name = name;
    this->orderCount = orderCount;
}
void Customer::setName(std::string name) {
    this->name = name;
}

Customer::~Customer()
{

}
void Customer::addOrderCount() {
    orderCount++;
}

void Customer::printName() {
    std::cout << name;
}