#include <stdio.h>
#define MAX 50

void merge(int a[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = low, c[MAX];
    
    while (i <= mid && j <= high)
        c[k++] = (a[i] < a[j]) ? a[i++] : a[j++];

    while (i <= mid)  c[k++] = a[i++];
    while (j <= high) c[k++] = a[j++];

    for (i = low; i <= high; i++) a[i] = c[i];
}

void mergesort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main() {
    int a[MAX], n, i;
    printf("Enter the number of elements to sort: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    mergesort(a, 0, n - 1);

    printf("The sorted elements are:\n");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}     