


#include <iostream>

class Calculator {
public:
    // Constructor
    Calculator() {
        std::cout << "I'm called";
    }

    ~Calculator()
    {
        std::cout << "I'm deleted";
    }
    // Function for addition
    double add(double num1, double num2) {
        return num1 + num2;
    }

    // Function for subtraction
    double subtract(double num1, double num2) {
        return num1 - num2;
    }

    // Function for multiplication
    double multiply(double num1, double num2) {
        return num1 * num2;
    }

    // Function for division
    double divide(double num1, double num2) {
        if (num2 == 0) {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
            return 0.0; // You can handle this error differently if needed
        }
        return num1 / num2;
    }
};

int main() {
    double a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    // Create an instance of the Calculator class
    Calculator calc;

    std::cout << "Addition: " << calc.add(a, b) << std::endl;
    std::cout << "Subtraction: " << calc.subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << calc.multiply(a, b) << std::endl;
    std::cout << "Division: " << calc.divide(a, b) << std::endl;

    
    return 0;
}
