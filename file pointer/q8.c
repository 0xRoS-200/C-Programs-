#include <stdio.h>
int main()
{
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("Cannot open file\n");
        return 1;
    }
    int ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}