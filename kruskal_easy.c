#include <stdio.h>
int i, j, a, b, u, v, n, ne = 1, min, cost[9][9], p[9], mc = 0;
int f(int i)
{
    while (p[i])
        i = p[i];
    return i;
}
int main()
{
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);
            if (!cost[i][j])
                cost[i][j] = 999;
        }
    while (ne < n)
    {
        for (i = 1, min = 999; i <= n; i++)
            for (j = 1; j <= n; j++)
                if (cost[i][j] < min)
                    min = cost[a = u = i][b = v = j];
        if ((u = f(u)) != (v = f(v)))
        {
            printf("Edge %d:(%d,%d)=%d\n", ne++, a, b, min);
            mc += min;
            p[v] = u;
        }
        cost[a][b] = cost[b][a] = 999;
    }
    printf("Min cost: %d", mc);
}