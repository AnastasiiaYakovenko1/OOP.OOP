#include <string.h>
#include <iostream>

class Customer {
private:
    std::string name;
public:
    int orderCount;

    Customer();

    Customer(std::string name);

    Customer(std::string name, int orderCount);

    ~Customer();

    void setName(std::string name);

    void printName();

    void addOrderCount();
};