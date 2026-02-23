// binary search
#include <stdio.h>

void main()
{
    int arr_size, low, high, mid, ele;
    printf("Determine the Array Size (positive number): ");
    scanf("%u", &arr_size);
    int arr[arr_size];
    printf("Enter Elements: ");
    for (int i = 0; i < arr_size; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to find: ");
    scanf("%d", &ele);
    low = 0, high = arr_size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == ele)
        {
            printf("%d found at position %d", ele, mid);
            return;
        }
        else if (ele > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("%d is not in the array", ele);
}