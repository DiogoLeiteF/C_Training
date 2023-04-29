#include <stdio.h>

int main(int argc, char const *argv[])
{
    struct dates
    {
        int day;
        int month;
        int year;
    };
    //                              0               1           2
    struct dates myDates[5] = {{12,10,1975}, {13,9,2000},{3, 5, 2030}} ;
    // initialize just one element
    // struct dates myDates[5] = {[4]={21,5,1800}};
    
    
    // myDates[3].day=19;
    // myDates[3].month=7;
    // myDates[3].year=1900;
    

    printf("%d\n", myDates[0].day);
    printf("%d\n", myDates[1].day);
    printf("%d\n", myDates[2].day);
    printf("%d\n", myDates[3].day);
    printf("%d\n", myDates[4].day);
    


    
    return 0;
}
