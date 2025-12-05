#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][25] = {0};
    int rows = (int)(sizeof(names)/ sizeof(names[0]));
    for(int i = 0; i < rows; i++)
    {
        printf("Enter a Name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        // names[i][strlen(names[i]) - 1] = '\0';
        names[i][strcspn(names[i], "\n")] = '\0'; //safely remove newline of present
        
    }

    for(int j = 0; j < rows; j++)
    {
        printf("Name %d is %s\n", j + 1, names[j]);
    }
    return 0;
}