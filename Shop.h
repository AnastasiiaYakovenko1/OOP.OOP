#include <iostream>
using namespace std;

class Shop {
private:
    string url;
public:
    static int orderCount;

    Shop();
    Shop(string name);
    ~Shop();

    void setUrl(string url);

    void printUrl() const;
    void addOrderCount();
};