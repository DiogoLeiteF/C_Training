#include <stdio.h>

void swapValues (int val1, int val2);
void swapPtr (int *val1, int *val2);

int main(int argc, char const *argv[])
{
    int a = 100;
    int b = 200;

    printf("value a: %d\n", a);
    printf("value b: %d\n", b);

    swapValues(a, b); // doesn't change the values outside the function 

    printf("value a: %d\n", a);
    printf("value b: %d\n", b);

    swapPtr(&a, &b); // change the values outside the function 
    printf("\nusing pointers we change the values out of the function\n");

    
    printf("value a: %d\n", a);
    printf("value b: %d\n", b);

    return 0;
}


void swapPtr (int *val1, int *val2){
    int temp;

    temp = *val1;
    *val1 = *val2;
    *val2 = temp;

}

void swapValues(int val1, int val2)
{
    int temp;

    temp = val1;
    val1 = val2;
    val2 = temp;

}
