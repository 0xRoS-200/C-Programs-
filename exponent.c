#include <stdio.h>
#include <math.h> // Required for pow()

int main() {
    double base, result;
    double exponent;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exponent);

    // pow(base, exponent) calculates base^exponent
    result = pow(base, exponent);

    // %.2lf prints 2 decimal places
    printf("%.2lf^%.2lf = %.2lf", base, exponent, result);

    return 0;
}