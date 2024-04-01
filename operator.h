#ifndef OOP_2_OPERATOR_H
#define OOP_2_OPERATOR_H
#include <iostream>
using namespace std;


class Operator {
    int x, y;
public:
    Operator(int x, int y);


    Operator operator+() const
    {
        return Operator{x, y};
    };



    Operator operator+(const Operator& other) const
    {
        return Operator{x + other.x, y + other.y};
    };

    string showUnary() const;
    string showBinary() const;
};


#endif
