#include<iostream>
#include"Shape.h"
#include"Circle.h"
#include"Square.h"

class Calculator {
public:

    using MathFunc = double (Calculator::*)(double, double);

    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0.0) {
            std::cout << "Ошибка: деление на ноль! ";
            return 0.0;
        }
        return a / b;
    }

    double calculate(double a, double b, MathFunc func) {
        return (this->*func)(a, b);

    }

};

int main()
{
	setlocale(LC_ALL, "RUS.UTF-8");

    Calculator calc;
    double x = 200.0;
    double y = 100.0;

    std::cout << "Сложение: " << calc.calculate(x, y, &Calculator::add) << "\n";
    std::cout << "Вычитание: " << calc.calculate(x, y, &Calculator::subtract) << "\n";
    std::cout << "Умножение: " << calc.calculate(x, y, &Calculator::multiply) << "\n";
    std::cout << "Деление: " << calc.calculate(x, y, &Calculator::divide) << "\n";

	return 0;
}

