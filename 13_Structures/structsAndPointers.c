#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

int main(int argc, char const *argv[])
{
    // declare and initialize struct date for today variable
    struct date today = {1, 6, 2020};

    // declare a date struct pointer
    struct date *datePtr;

    // assign the address of today struct to the ptr
    datePtr = &today;

    // dereference the pointer to access the data of the variable
    // parntheses are required because the (.) has higher precedence than the (*)
    (*datePtr).day = 21;
    // OR  (->)
    datePtr->day = 21;
    datePtr->month = 6;
    datePtr->year = 2021;

    printf("%d/%d/%d\n\n", datePtr->day, datePtr->month, datePtr->year);

    /*
    Pointers inside structures
    */
    struct intPtrs
    {
        int *p1;
        int *p2;
    };

    struct intPtrs pointers;
    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    printf("i1 = %i, *pointers.p1 = %i, pointers.p1 = %p\n", i1, *pointers.p1, pointers.p1);
    printf("i2 = %i, *pointers.p2 = %i, pointers.p2 = %p\n\n\n", i2, *pointers.p2, pointers.p2);

    /*
    Characters arrays OR Character pointers
    */

    struct name
    {
        char first[20];
        char last[20];
        // strings are stored inside the structure
        // the structure allocate 20+20 bytes to hold the names
    };

    struct pname
    {
        char *first;
        char *last;
        // strings are stored wherever the compiler stores the string constants
        // the structure holds the 2 addresses. which takes a total of 16 bytes on our system
        // the structure allocates no space to store the strings
        // it can be used only with strings that have had space allocated for them elsewhere, such as string constants or string arrays
    };

    struct name veep = {"Talia", "Summeres"};
    struct pname treas = {"Brad", "Fallingjaw"};

    printf("%s and %s\n", veep.first, treas.first);
    printf("%s and %s\n", veep.last, treas.last);

    return 0;
}
