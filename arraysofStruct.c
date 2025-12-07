#include <stdio.h>

typedef struct{
    char name[30];
    int age;
    char department[5];
    char usn[10];
}College;

void printStudents(College students[], int size)
{
    for(int i = 0; i < size; i++)
    {
    printf("Name: %s\nAge: %d\nDept: %s\nUSN Number: %s\n", students[i].name, students[i].age, students[i].department, students[i].usn);
    }
}
int main()
{
    College students[] = {{"Rohit Kumar Singh", 25, "MCA", "FST12345"}, 
                          {"Chinthana Bhat", 22, "MCA", "FST15445"},
                          {"Aditya Narayan", 19, "MCA", "FST45345"}};
    int sizeofArr = sizeof(students) / sizeof(students[0]);

    printStudents(students, sizeofArr);

    return 0;
}