#include <stdio.h>

int partition(int a[], int low, int high) {
    int i = low + 1, j = high, key = a[low], t;
    while (1) {
        while (i <= high && a[i] <= key) i++;
        while (a[j] > key) j--;
        if (i < j) {
            t = a[i]; a[i] = a[j]; a[j] = t;
        } else {
            t = a[low]; a[low] = a[j]; a[j] = t;
            return j;
        }
    }
}

void quicksort(int a[], int low, int high) {
    if (low < high) {
        int j = partition(a, low, high);
        quicksort(a, low, j - 1);
        quicksort(a, j + 1, high);
    }
}

int main() {
    int i, n, a[20];
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the numbers to be sorted:\n");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    quicksort(a, 0, n - 1);

    printf("The sorted array is:\n");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}