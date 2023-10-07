#include <iostream>
#include <cmath>

// Define the function for which you want to calculate the derivative
double f(double x) {
    return x * x;
}

// Function to calculate the derivative using the forward difference method
double calculateDerivative(double x, double h) {
    return (f(x + h) - f(x)) / h;
}

int main() {
    double x = 2.0; // The point at which you want to calculate the derivative
    double h = 0.001; // Step size for numerical differentiation

    double derivative = calculateDerivative(x, h);

    std::cout << "The derivative of f(x) = x^2 at x = " << x << " is approximately: " << derivative << std::endl;

    return 0;
}
