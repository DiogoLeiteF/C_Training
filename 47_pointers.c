#include<stdio.h>

void printAge(int age)
{
    printf("you are %d years old\n", age);
}

void printPointerAge(int *pAge)
{
    printf("Pointer said that You are %d years old", *pAge);
}

int main()
{

    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //           some tasks are performed more easily with pointers
    //           * = indirection operator (value at address)

    int age = 21;
    // create a pointer (must be the same data type)
    // declare and assign
    // int *pAge = &age;

    int *pAge = NULL; // good practice to assign NULL if declaring a pointer
    pAge = &age;



    printf("address of age: %p\n", &age);
    printf("value of pAge: %p \n", pAge); // should be the same as age

    printf("size of age: %d\n", sizeof(age));   // int 4 bytes   
    printf("size of pAge: %d\n", sizeof(pAge)); // hexadecimal 8 bytes


    printf("value of age: %d \n", age);
    printf("value at stored address: %d \n", *pAge); // dereferencing - use the * to access the value


    printAge(age);

    printPointerAge(pAge);


    return 0;
}



/*
Advantages of using pointers:
* Less time in program execution
* working on the original variable
* with help of pointers, we can create data structures (linked-list, stack, queue)
* searching and sorting large data very easily
* Dynamically memory allocation

*/