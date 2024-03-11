#include <string.h>
#include <iostream>

class Shop {
private:
    std::string url;
public:
    static int orderCount;

    Shop();

    Shop(std::string name);

    ~Shop();

    void setUrl(std::string name);

    void printUrl();
    void addOrderCount();
};