#include <stdio.h>
#define INF 999

void dij(int n, int v, int cost[10][10], int dist[10])
{
   int i, u, count = 2, w, flag[10] = {0}, min;
   for (i = 1; i <= n; i++)
   {
      dist[i] = cost[v][i];
   }
   flag[v] = 1;
   while (count <= n)
   {
      min = INF;
      for (w = 1; w <= n; w++)
      {
         if (dist[w] < min && !flag[w])
            min = dist[u = w];
      }

      flag[u] = 1;
      count++;

      for (w = 1; w <= n; w++)
      {
         if (!flag[w] && (dist[u] + cost[u][w] < dist[w]))
            dist[w] = dist[u] + cost[u][w];
      }
   }
}

int main()
{
   int n, v, i, j, cost[10][10], dist[10];
   printf("Enter number of Nodes:");
   scanf("%d", &n);
   printf("Enter the cost matrix:\n");
   for (i = 1; i <= n; i++)
   {
      for (j = 1; j <= n; j++)
      {
         scanf("%d", &cost[i][j]);
         if (cost[i][j] == 0)
            cost[i][j] = 999;
      }
   }
   printf("Enter the source vertex:");
   scanf("%d", &v);
   dij(n, v, cost, dist);
   printf("The Shortest Path is:\n");
   for (i = 1; i <= n; i++)
   {
      if (i != v)
      {
         printf("%d -> %d, cost = %d\n", v, i, dist[i]);
      }
   }
   return 0;
}