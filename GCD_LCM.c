#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int a = 12, b = 18;
    int g = gcd(a, b);
    int l = (a * b) / g;
    printf("GCD: %d\n", g);
    printf("LCM: %d\n", l);
    return 0;
}