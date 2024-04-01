#include "Customer.h"

int Customer::customers = 0;

Customer::Customer(string name, string surname, int orderCount)
{
    this->name = name;
    this->surname = surname;
    this->orderCount = orderCount;

    customers++;
}

Customer::Customer(const Customer &other)
{
    this->name = other.name;
    this->surname = other.surname;
    this->orderCount = other.orderCount;

    customers++;
};

Customer::Customer(Customer &&other)
    : name(other.name), surname(other.surname), orderCount(other.orderCount)
{
    other.name = "";
    other.surname = "";
    other.orderCount = 0;

    customers++;
};


void Customer::customersFoo()
{
    cout << "Count of customers: " << customers;
}

ostream &operator << (ostream &os, Customer &obj)
{
    return os << "Name: " << obj.name << " " << obj.surname << "\n"
              << "Order count: " << obj.orderCount << "\n";
};

istream &operator >> (istream &is, Customer &obj)
{
    cout << "Name:";
    is >> obj.name;

    cout << "Surname:";
    is >> obj.surname;

    cout << "Order count:";
    is >> obj.orderCount;

    return is;
};

