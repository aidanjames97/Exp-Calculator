#include <stdio.h>

// recursive function to calculate the power
double power(double base, int exponent) {
    // base case
    if (exponent == 0) {
        return 1;
        // case if 1
    } else if (exponent == 1) {
        return base;
        // case if less then 0
    } else if (exponent < 0) {
        return 1.0 / power(base, -exponent);
    }

    // calculating using logarithmic recursion and returning
    double result = power(base, exponent / 2);
    result *= result;

    if (exponent % 2 == 1) {
        result *= base;
    }
    // return
    return result;
}

// main
int main(void) {
    // varaiable to hold base and the exponent
    double base;
    int exponent;

    // variable to hold the result
    double result;

    // boolean variable to check if user wants to continue entering or print
    _Bool done = 0;

    // while loop to keep asking user for inputs
    while (done == 0) {
        // asking user for base of exponent
        printf("Entre base of exponent (double):\n");
        scanf(" %lf", &base);

        // asking user for exponent
        printf("Entre exponent (int):\n");
        scanf(" %d", &exponent);

        // exponent 0, display result and terminate program
        if (exponent == 0){
            done = 1;
            printf("result is %.2f\n", result);
        } else {
            result = power(base, exponent);
            printf("%.2f raised to %i is %.2f\n", base, exponent, result);
        }
    }

    // return
    return 0;
}