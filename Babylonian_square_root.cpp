#include <iostream>
#include <cmath>

double babylonianSquareRoot(double n) {
    double x = n;
    double y = 1;
    double precision = 0.000001; // Define the desired precision

    while (x - y > precision) {
        x = (x + y) / 2;
        y = n / x;
    }

    return x;
}

int main() {
    double number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Square root of a negative number is not defined." << std::endl;
    } else {
        double squareRoot = babylonianSquareRoot(number);
        std::cout << "Square root of " << number << " is approximately " << squareRoot << std::endl;
    }

    return 0;
}
