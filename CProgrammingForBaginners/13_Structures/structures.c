#include <stdio.h>


int main(int argc, char const *argv[])
{
    // 3 different forms to create a struct:

    // 1: define for many uses;

    struct date
    {
        int day;
        int month;
        int year;
    };

    // defining today variable
    // struct date today;

    // today.day = 10;
    // today.month = 12;
    // today.year = 2022;
    // OR
    struct date today = {9, 11, 2021};
    // OR
    struct date yesterday = {.day=8, .month=11, .year=2021};
    // OR
    // Assignment with compound literals (cast)
    // otherDay = (struct date){5, 7, 2015};
    // otherDay = (struct date){.day=5, .month=7, .year=2015};


    

    printf("today date %d/%d/%d\n", today.day, today.month, today.year); 
    printf("yesterday date %d/%d/%d\n", yesterday.day, yesterday.month, yesterday.year); 


    // 2: define structure and variable at same time
    struct date2
    {
        int day;
        int year;
        int month;
    } purchaseDate;

    purchaseDate.day = 13;

    printf("purchase day: %d\n", purchaseDate.day);


    // 3: un-named Structures => for one use only
    struct 
    {
        int day;
        int month;
        int year;
    } someDate;

    someDate.day = 15;

    printf("some date day: %d\n", someDate.day);
    
      
       
    
    return 0;
}
