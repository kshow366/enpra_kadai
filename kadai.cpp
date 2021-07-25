#include<iostream>

class Calculator{
    public:
        double add(double x, double y);
        double sub(double x, double y);
        double mul(double x, double y);
        double div(double x, double y);
};

double Calculator::add(double x, double y)
    {
        return x + y;
    }

double Calculator::sub(double x, double y)
    {
        return x - y;
    }

double Calculator::mul(double x, double y)
    {
        return x * y;
    }

double Calculator::sub(double x, double y)
    {
        return x / y;
    }