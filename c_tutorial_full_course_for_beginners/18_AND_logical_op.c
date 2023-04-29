#include <stdio.h>
#include <stdbool.h>


int main(){

    // && (AND) checks if two conditions are true

    float temp = 25;
    bool sunny = true;

    if (temp >= 0 && sunny)
    {
        printf("\nThe weather is good!");
    }
    else
    {
        printf("\nThe weather is bad!");
    }
    


    return 0;
}