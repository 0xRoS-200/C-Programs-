#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char usn[10], name[20];
    int marks;
};
void main()
{
    struct student s[100];
    int n, i;
    float sum = 0.0, avg;
    printf("Enter the number of students\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter the student %d details\n", i);
        printf("Enter USN:");
        scanf("%s", &s[i].usn);
        printf("Enter Name:");
        scanf("%s", &s[i].name);
        printf("Enter marks:");
        scanf("%d", &s[i].marks);
        sum = sum + s[i].marks;
    }
    avg = sum / n;
    printf("Class Averageis %f\n", avg);
    printf("Details of students scoring above class average\n");
    printf("USN\tName\tMarks\n");
    for (i = 1; i <= n; i++)
    {
        if (s[i].marks > avg)
            printf("%s\t%s\t%d\n", s[i].usn, s[i].name, s[i].marks);
    }
    printf("Details ofstudentsscoringbelowclassaverage\n");
    printf("USN\t Name\t Marks\n");
    for (i = 1; i <= n; i++)
    {
        if (s[i].marks < avg)
            printf("%s\t%s\t%d\n", s[i].usn, s[i].name, s[i].marks);
    }
}