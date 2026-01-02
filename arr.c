#include <stdio.h>

void traverse(int a[], int n)
{
    printf("The array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void insertion(int a[], int *n, int pos, int val)
{
    for (int i = *n; i > pos; i--)
    {
        a[i] = a[i-1];
    }
    a[pos] = val;
    *(n)++;
}

int main()
{
    int arr[10] = {10, 20, 30};
    int n = 3;

    traverse(arr, n);
    insertion(arr, &n, 2, 40);
    traverse(arr, n);
    return 0;
}