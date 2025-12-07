#include <stdio.h>
#include <stdlib.h>

int main()
{
    char message[] = "Sojao";
    FILE *pFile = fopen("output.txt", "w");
    if (pFile == NULL)
    {
        printf("File Reading Error!\n");
        return 1;
    }
    fprintf(pFile, "%s", message);
    fclose(pFile);

    return 0;
}