#include <stdio.h>

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int arr[5] = {6, 4, 2, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        int findMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[findMin])
            {
                findMin = j;
            }
        }
        swap(&arr[findMin], &arr[i]);
    }
    printf("Sorted Arr: ");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}