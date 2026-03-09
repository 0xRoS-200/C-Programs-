#include <stdio.h>
int main()
{
    FILE *fp;
    int x = 50, y;
    fp = fopen("num.txt", "w");
    fprintf(fp, "%d\n", x);
    fclose(fp);
    fp = fopen("num.txt", "r");
    fscanf(fp, "%d", &y);
    fclose(fp);
    printf("Value = %d\n", y);
    return 0;
}