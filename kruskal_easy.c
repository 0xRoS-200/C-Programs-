#include <stdio.h>
#define INF 999

int n, cost[9][9], parent[9];

int find(int i)
{
    while (parent[i])
        i = parent[i];
    return i;
}

int main()
{
    int i, j, u, v, a, b;
    int edges = 1, min, minCost = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    // read cost matrix
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = INF;
        }

    // Kruskal
    while (edges < n)
    {
        min = INF;

        // find minimum edge
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                if (cost[i][j] < min)
                {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }

        u = find(u);
        v = find(v);

        // if no cycle
        if (u != v)
        {
            printf("Edge %d:(%d,%d)=%d\n", edges++, a, b, min);
            minCost += min;
            parent[v] = u;
        }

        cost[a][b] = cost[b][a] = INF;
    }

    printf("Min cost: %d", minCost);
    return 0;
}
