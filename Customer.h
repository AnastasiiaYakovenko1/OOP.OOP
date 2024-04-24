#include <iostream>
using namespace std;

class Customer
{
private:
    string name, surname;
    int orderCount;

    static int customers;
public:
    Customer(){ customers++; };
    Customer(string name, string surname, int orderCount);

    Customer(const Customer &other);

    Customer(Customer &&other);

    ~Customer(){ customers--; };

    static void customersFoo();
    friend ostream &operator << (ostream &os, Customer &obj);
    friend istream &operator >> (istream &is, Customer &obj);
};