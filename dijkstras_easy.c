#include <stdio.h>
#define INF 999

int n, cost[10][10], dist[10], visited[10];

void dijkstra(int src)
{
    int i, u, min;

    // Step 1: initialize
    for (i = 1; i <= n; i++)
    {
        dist[i] = cost[src][i];
        visited[i] = 0;
    }

    dist[src] = 0;
    visited[src] = 1;

    // Step 2: repeat n-1 times
    for (int count = 1; count < n; count++)
    {
        min = INF;

        // pick nearest unvisited node
        for (i = 1; i <= n; i++)
            if (!visited[i] && dist[i] < min)
            {
                min = dist[i];
                u = i;
            }

        visited[u] = 1;

        // relax neighbors
        for (i = 1; i <= n; i++)
            if (!visited[i] && dist[u] + cost[u][i] < dist[i])
                dist[i] = dist[u] + cost[u][i];
    }
}

int main()
{
    int i, j, src;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = INF;
        }

    scanf("%d", &src);

    dijkstra(src);

    for (i = 1; i <= n; i++)
        if (i != src)
            printf("%d->%d=%d\n", src, i, dist[i]);

    return 0;
}
