#include<iostream>

class Calculator{
    public:
        double a;
        double b;
        double add(double a, double b);
        double sub(double a, double b);
        double mul(double a, double b);
        double div(double a, double b);
};

double Calculator::add(double a, double b)
    {
        return a + b;
    }

double Calculator::sub(double a, double b)
    {
        return a - b;
    }

double Calculator::mul(double a, double b)
    {
        return a * b;
    }

double Calculator::div(double a, double b)
    {
        return a / b;
    }

int main()
    {
        Calculator cal;

        std::cout << cal.add(15.0, 3.0) << std::endl;
        std::cout << cal.sub(15.0, 3.0) << std::endl;
        std::cout << cal.mul(15.0, 3.0) << std::endl;
        std::cout << cal.div(15.0, 3.0) << std::endl;

        return 0;
    }