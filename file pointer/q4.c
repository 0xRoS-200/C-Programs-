#include <stdio.h>

struct emp
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    FILE *fp;
    struct emp e;
    int n;

    fp = fopen("emp.dat", "wb+");

    // Writing 3 employee records
    for (int i = 0; i < 3; i++)
    {
        printf("Enter ID Name Salary: ");
        scanf("%d %s %f", &e.id, e.name, &e.salary);

        fwrite(&e, sizeof(e), 1, fp);
    }

    printf("Enter employee number to access: ");
    scanf("%d", &n);

    // Move file pointer to nth record
    fseek(fp, (n - 1) * sizeof(e), SEEK_SET);

    fread(&e, sizeof(e), 1, fp);

    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);

    fclose(fp);
}