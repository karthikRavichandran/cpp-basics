#include <iostream>
#include <cmath>

class MathOperations {
public:
    // Constructor (optional)
    MathOperations() {
        std::cout << "MathOperation Object is initiated \n";
    }

    // Destructor (optional)
    ~MathOperations() {
        std::cout << "The MathOperation is destructed"; 
    }

    // Define the function for which you want to calculate the derivative
    double f(double x) {
        return x * x;
    }

    // Function to calculate the derivative using the forward difference method
    double calculateDerivative(double x, double h) {
        return (f(x + h) - f(x)) / h;
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
};

int main() {
    MathOperations math;

    double x = 2.0; // Point at which to calculate the derivative
    double h = 0.001; // Step size for numerical differentiation
    double derivative = math.calculateDerivative(x, h);

    double a = 0.0; // Lower limit of integration
    double b = 1.0; // Upper limit of integration
    int n = 1000; // Number of subintervals for numerical integration
    double integral = math.calculateIntegral(a, b, n);

    std::cout << "Derivative at x = " << x << " is approximately: " << derivative << std::endl;
    std::cout << "Integral from " << a << " to " << b << " is approximately: " << integral << std::endl;

    return 0;
}
