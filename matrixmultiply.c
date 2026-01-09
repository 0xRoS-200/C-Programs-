#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    printf("Enter dimensions of A and B: ");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

    // Rule Validation
    if (c1 != r2) {
        printf("Invalid Dimensions: c1 must equal r2");
        return 1;
    }

    int a[r1][c1], b[r2][c2], res[r1][c2];

    printf("Enter Matrix A:\n");
    for(i=0; i<r1; i++) for(j=0; j<c1; j++) scanf("%d", &a[i][j]);

    printf("Enter Matrix B:\n");
    for(i=0; i<r2; i++) for(j=0; j<c2; j++) scanf("%d", &b[i][j]);

    // Combined Logic: Initialization + Multiplication
    printf("Resultant Matrix:\n");
    for(i=0; i<r1; i++) {
        for(j=0; j<c2; j++) {
            res[i][j] = 0; // Initialize here to save space
            for(k=0; k<c1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}