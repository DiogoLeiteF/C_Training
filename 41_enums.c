#include <stdio.h>

enum Day
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7
};

int main()
{
    // enum = a user defined type of named integer identifiers
    // helps to make a program more readable

    enum Day today = Sat;

    // printf("%d", today); // enums are nor strings, but they can be threted as int

    if (today == Sun || today == Sat)
    {
        printf("\nWeekend!");
    }
    else
    {
        printf("\nback to work!");
    }

    return 0;
}