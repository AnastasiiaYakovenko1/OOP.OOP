#include "Shop.h"

<<<<<<< HEAD
using namespace std;


int Shop::orderCount = 0;
Shop::Shop() {
    url = "www.shop";
=======
int Shop::orderCount = 0;

Shop::Shop()
{
    url = "www.shopExample";
>>>>>>> 64bd0994f826a4d570a72c38407efe7fe1aca32c
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