#include <stdio.h>

int main()
{
    FILE *fp;
    int ch;
    int characters = 0, words = 0, lines = 0;

    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("File not found");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == ' ' || ch == '\n')
            words++;

        if (ch == '\n')
            lines++;
    }

    fclose(fp);

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words + 1);
    printf("Lines = %d\n", lines + 1);

    return 0;
}