#include <stdio.h>

int rbin(int a[], int low, int high, int key)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (a[mid] == key)
        return mid;
    if (a[mid] > key)
        return rbin(a, low, mid - 1, key);
    else
        return rbin(a, mid + 1, high, key);
}

int main()
{
    int key = 9, a[5] = {1, 4, 6, 7, 9}, n = 5;
    int low = 0, high = n - 1;
    int pos = rbin(a, low, high, key);

    if (pos == -1)
    {
        printf("Key not found!!\n");
    }
    else
    {
        printf("Key found at %d position\n", pos);
    }
    return 0;
}