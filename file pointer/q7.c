#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("modes.txt", "w");
    fprintf(fp, "Written using w mode\n");
    fclose(fp);
    fp = fopen("modes.txt", "a");
    fprintf(fp, "Added using a mode\n");
    fclose(fp);
    fp = fopen("modes.txt", "r");
    int ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    return 0;
}