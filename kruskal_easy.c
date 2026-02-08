#include <stdio.h>
#define VAL 999

int i, j, a, b, u, v, n, ne = 1, min, mincost = 0;
int cost[9][9], parent[9] = {0};

int find(int i) {
    while (parent[i]) i = parent[i];
    return i;
}

int uni(int i, int j) {
    if (i != j) {
        parent[j] = i;
        return 1;
    }
    return 0;
}

int main() {
    printf("Implementation of Kruskal's algorithm\n");
    printf("Enter the no. of vertices:");
    scanf("%d", &n);

    printf("Enter the cost adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0) cost[i][j] = VAL;
        }
    }

    printf("The edges of Minimum Cost Spanning Tree are\n");
    while (ne < n) {
        for (i = 1, min = VAL; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (cost[i][j] < min) {
                    min = cost[i][j];
                    a = u = i; b = v = j;
                }
            }
        }

        u = find(u); v = find(v);
        if (uni(u, v)) {
            printf("%d edge (%d,%d) =%d\n", ne++, a, b, min);
            mincost += min;
        }
        cost[a][b] = cost[b][a] = VAL;
    }

    printf("\n\tMinimum cost = %d\n", mincost);
    return 0;
}