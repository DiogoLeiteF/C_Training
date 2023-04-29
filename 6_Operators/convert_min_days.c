#include<stdio.h>

int main(){

    int minutes = 0;
    int minutesInYear = 365*24*60;
    double hour = 0.0;
    double days = 0.0;
    double years = 0.0;
 


    printf("enter the number of minutes: ");
    scanf("%d", &minutes);

    printf("%d\n", minutesInYear);

    years = minutes / minutesInYear;
    

    days = ((minutes % minutesInYear) / 60 / 24) % 365;

    hour = ((minutes % minutesInYear) /60) % 24 ;

    minutes = minutes % 60;

    


    printf("Years: %.0f\n", years);
    printf("days: %.0f\n", days);
    printf("hours: %.0f\n", hour);
    printf("minutes: %d\n", minutes);
    




    return 0;
}