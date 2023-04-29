#include <stdio.h>
#include <stdbool.h>


int main(){

    // ! (NOT) reverses the state of a condition

    float temp = 25;
    bool sunny = false;

    if (sunny == !true)
    {
        printf("\nThe weather is bad!");
    }
    else
    {
        printf("\nThe weather is good!");
    }
    


    return 0;
}