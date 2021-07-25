#include<iostream>

class Calculator{
    public:
        double a;
        double b;
        double add();
        double sub();
        double mul();
        double div();
};

double Calculator::add()
    {
        return a + b;
    }

double Calculator::sub()
    {
        return a - b;
    }

double Calculator::mul()
    {
        return a * b;
    }

double Calculator::sub()
    {
        return a / b;
    }