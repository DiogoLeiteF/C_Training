#include <stdio.h>
#include <string.h>


struct Student
{
    char name[25];
    double gpa;
};


int main()
{

    struct Student student1 = {"name1", 2.5};
    struct Student student2 = {"name2", 1.5};
    struct Student student3 = {"name3", 3.5};
    struct Student student4 = {"name4", 4.5};


    struct Student students[] = {student1, student2, student3, student4};


    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("\nNAME: %s -> %.2lf", students[i].name, students[i].gpa);
    }



    return 0;
}