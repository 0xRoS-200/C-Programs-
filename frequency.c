#include <stdio.h>

int main()
{
    int arr[8];
    int visitedSection[8];
    int i, j;

    printf("Enter elements in array: ");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
        visitedSection[i] = 0; // reset elements to 0
    }

    for (i = 0; i < 8; i++)
    {
        if (visitedSection[i] == 1)
        {
            continue;
        }
        int count = 1;
        for (j = i + 1; j < 8; j++)
        {
            if (arr[i] == arr[j])
            {
                visitedSection[j] = 1;
                count++;
            }
        }
        printf("The element %d is found %d times in the given array!\n", arr[i], count);
    }
    return 0;
}