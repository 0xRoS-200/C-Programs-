#include <stdio.h>
#include <limits.h>

int reverse(int x)
{
    int revdigit = 0;
    {
        while (x != 0)
        {
            int extdig = x % 10;
            if (revdigit > INT_MAX / 10 || (revdigit == INT_MAX / 10 && extdig > 7))
                return 0;
            if (revdigit < INT_MIN / 10 || (revdigit == INT_MIN / 10 && extdig < -8))
                return 0;
            revdigit = revdigit * 10 + extdig;
            x = x / 10;
        }
        return revdigit;
    }
}
    int main()
    {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        int result = reverse(num);
        printf("\nThe reversed integer is %d\n", result);
    }