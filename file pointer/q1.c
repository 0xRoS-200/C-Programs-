#include <stdio.h>
int main()
{
    FILE *fp = fopen("data.txt", "w");
    fprintf(fp, "Hello File Handling\n");
    fclose(fp);
    fp = fopen("data.txt", "r");
    int ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}