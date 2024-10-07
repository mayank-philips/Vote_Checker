#include <iostream>
#include "Calculator.h"

int main() {
    double a, b;
    char operation;

    std::cout << "Enter your age : ";
    std::cin >> a;
   // std::cout << "Enter second number: ";
    /*std::cin >> b;
    std::cout << "Enter operation (+, -, *, /): ";*/
    /*std::cin >> operation;*/
    operation = '-';

    if (a > 18)
    {
    std::cout << "Eligible for vote" << std::endl;
        
    }
    else {
        double result;

        switch (operation) {
        case '+':
            result = Calculator::add(a, b);
            break;
        case '-':
            result = Calculator::subtract(a, 18);
            break;
        case '*':
            result = Calculator::multiply(a, b);
            break;
        case '/':
            try {
                result = Calculator::divide(a, b);
            }
            catch (const std::invalid_argument& e) {
                std::cerr << e.what() << std::endl;
                return 1;
            }
            break;
        default:
            std::cerr << "Invalid operation!" << std::endl;
            return 1;
        }
        std::cout << "For vote you need to wait for " << abs(result) <<" year" << std::endl;
    }

    

    return 0;
}
