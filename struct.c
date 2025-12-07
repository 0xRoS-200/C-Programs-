#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    char name[20];
    int age;
    bool isWorking;
    long long int contactNum;
} Name;

int main()
{
    Name student1 = {"Rohit Kumar Singh", 25, false, 9903031928};
    Name student2 = {0};

    strcpy(student2.name, "Dora");
    student2.age = 23;
    student2.isWorking = false;
    student2.contactNum = 9999999999;


    printf("Name: %s\nAge: %d\nWorking Professional: %s\nContact Number: %lld\n", student1.name, student1.age, (student1.isWorking) ? "Yes" : "No", student1.contactNum);
    printf("Name: %s\nAge: %d\nWorking Professional: %s\nContact Number: %lld\n", student2.name, student2.age, (student2.isWorking) ? "Yes" : "No", student2.contactNum);
    return 0;
}
