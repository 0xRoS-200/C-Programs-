// bubble sort
#include <stdio.h>

void swap(int *v1, int *v2)
{
    int temp;
    temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}

int main()
{
    int arr[5] = {5, 3, 6, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    printf("Sorted Arr: ");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}