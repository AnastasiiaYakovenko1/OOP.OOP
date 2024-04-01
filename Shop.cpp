#include "Shop.h"

int Shop::orderCount = 0;

Shop::Shop()
{
    url = "www.shopExample";
    url += to_string(orderCount);
    url += ".com";
}

Shop::Shop(string url)
    : url(url) {}

Shop::~Shop()
{
    cout << "\nDestructor for shop";
}

void Shop::setUrl(string url)
{
    this->url = url;
}

void Shop::printUrl() const
{
    cout << url;
}

void Shop::addOrderCount()
{
    orderCount++;
}