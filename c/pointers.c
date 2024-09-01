#include <stdio.h>

void printAge(int *pAge)
{
    printf("You are %d years old\n", *pAge); // derreference
}


int main(int argc, char const *argv[])
{
    
    int age = 21;

    // int *pAge = &age;
    int *pAge = NULL; // Good practice to assign NULL when declaring a pointer
    pAge = &age;


    printf("address of age: %p\n", &age);
    printf("address of age: %p\n",pAge);

    printf("value of age: %d\n", age);
    printf("value at stored address pAge: %d\n", *pAge);


    printAge(pAge);


    return 0;
}
