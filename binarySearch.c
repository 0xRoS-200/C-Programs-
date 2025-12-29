//only works at sorted array
#include <stdio.h>

int main()
{
    int arr[7] = {1, 3, 5, 7, 9, 12, 15};
    int n = 7;
    int high = n - 1, low = 0, mid, key = 12;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            printf("Element %d found at index %d", key, mid);
            return 0;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("Element not found!!");
    return 0;
}