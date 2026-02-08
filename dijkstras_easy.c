#include <stdio.h>
int n, v, i, j, c[10][10], d[10], f[10], u, m, cnt = 2;
void dij()
{
    for (i = 1; i <= n; i++)
        d[i] = c[v][i];
    f[v] = 1;
    while (cnt++ <= n)
    {
        for (i = 1, m = 999; i <= n; i++)
            if (!f[i] && d[i] < m)
                m = d[u = i];
        f[u] = 1;
        for (i = 1; i <= n; i++)
            if (!f[i] && d[u] + c[u][i] < d[i])
                d[i] = d[u] + c[u][i];
    }
}
int main()
{
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &c[i][j]);
            if (!c[i][j])
                c[i][j] = 999;
        }
    scanf("%d", &v);
    dij();
    for (i = 1; i <= n; i++)
        if (i != v)
            printf("%d->%d=%d\n", v, i, d[i]);
}