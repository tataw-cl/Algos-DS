#include <stdio.h>

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
    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number < 0) {
        printf("Square root of a negative number is not defined.\n");
    } else {
        double squareRoot = babylonianSquareRoot(number);
        printf("Square root of %.2lf is approximately %.6lf\n", number, squareRoot);
    }

    return 0;
}
