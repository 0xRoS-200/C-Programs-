#include <stdio.h>

int maxArea(int height[], int size);

int main()
{
    int height[] = {1, 7, 4, 6, 8, 9, 7, 3};
    int size = sizeof(height) / sizeof(height[0]);

    int storeMaxArea = maxArea(height, size);
    printf("Max Area: %d", storeMaxArea);
    return 0;
}

int maxArea(int height[], int size)
{
    int left = 0;         // initialize first pointer
    int right = size - 1; // initialize second pointer
    int maximumarea;

    while (left < right)
    {
        // 1. Calculae dimensions
        int width = right - left;

        // find shorter end
        int h = height[left] < height[right] ? height[left] : height[right];
        // calculate area
        int currentArea = width * h;
        // 2.update max area
        if (currentArea > maximumarea)
        {
            maximumarea = currentArea;
        }

        // 3. Update pointer
        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return maximumarea;
}
