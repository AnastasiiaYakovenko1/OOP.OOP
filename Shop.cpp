#include <string.h>
#include <iostream>
#include "Shop.h"

using namespace std;


int Shop::orderCount = 0;
Shop::Shop() {
    url = "www.shop";
    url += to_string(orderCount);
    url += ".com";
}

Shop::Shop(std::string u) : url(u) {}

Shop::~Shop() {
    cout << "Destructor for shop";
}

void Shop::setUrl(std::string newUrl) {
    url = newUrl;
}

void Shop::printUrl() {
    cout << url;
}

void Shop::addOrderCount() {
    orderCount++;
}