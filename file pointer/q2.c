#include <stdio.h>
struct student
{
    int id;
};
int main()
{
    FILE *fp = fopen("s.dat", "wb+");
    struct student s;
    s.id = 10;
    fwrite(&s, sizeof(s), 1, fp);
    s.id = 20;
    fwrite(&s, sizeof(s), 1, fp);
    /* Jump to 2nd record (index 1) */
    fseek(fp, 1 * sizeof(s), SEEK_SET);
    fread(&s, sizeof(s), 1, fp);
    printf("ID = %d\n", s.id);
    fclose(fp);
    return 0;
}