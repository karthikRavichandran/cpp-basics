#include <iostream>
#include <cmath>

// Define the function for which you want to calculate the integral
double f(double x) {
    return x * x;
}

// Function to calculate the definite integral using the trapezoidal rule
double calculateIntegral(double a, double b, int n) {
    double h = (b - a) / n; // Calculate the step size
    double integral = 0.5 * (f(a) + f(b)); // Initialize the integral with the endpoints

    for (int i = 1; i < n; ++i) {
        double x_i = a + i * h; // Calculate intermediate points
        integral += f(x_i); // Add the function value at the intermediate point
    }

    integral *= h; // Multiply by the step size

    return integral;
}

int main() {
    double a = 0.0; // Lower limit of integration
    double b = 1.0; // Upper limit of integration
    int n = 1000; // Number of subintervals (higher values yield more accurate results)

    double result = calculateIntegral(a, b, n);

    std::cout << "The definite integral of f(x) = x^2 from " << a << " to " << b << " is approximately: " << result << std::endl;

    return 0;
}
