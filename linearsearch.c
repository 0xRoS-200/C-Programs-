//progtam to linear search using loops
#include <stdio.h>
int main()
{
    int arr[5], i, key, n;
    printf("Enter the number of elements in the array: \n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: \n");
    scanf("%d", &key);
    for(i = 0; i < 5; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }
    printf("Element not found in the array\n");
    return 0;
}