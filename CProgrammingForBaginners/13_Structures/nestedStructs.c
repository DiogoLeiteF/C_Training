#include <stdio.h>

int main(int argc, char const *argv[])
{

    struct time
    {
        int hours;
        int minutes;
        int seconds;
    };
    

    struct date
    {
        int day;
        int month;
        int year;
    };


    struct dateAndTime
    {
        struct date sdate;
        struct time stime;
    };

    // struct dateAndTime event;

    // event.sdate.day = 12;
    
    struct dateAndTime event = {{2,1,2015},{3, 30, 0}};

    printf("%d:%d:%d", event.stime.hours, event.stime.minutes, event.stime.seconds);


    //Array of nested structures

    struct dateAndTime events[100];

    events[0].stime.hours = 12;
    events[0].stime.minutes = 0;
    events[0].stime.seconds = 0;

    

    return 0;
}
