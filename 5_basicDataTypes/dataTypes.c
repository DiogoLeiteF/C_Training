#include <stdio.h>
#include <stdbool.h>

int main()
{
    int var0 = 125;
    float var1 = 23.33;
    double var2 = 55.54445161351398e+11;

    _Bool boolVariable = 1;

    // c99 - include stdbool.h
    bool boolVariable2 = true;

    printf("\nSize of int - %d", sizeof(var0)); //4
    printf("\nSize of float - %d", sizeof(var1)); //4
    printf("\nSize of double - %d", sizeof(var2)); //8
    printf("\nSize of _Bool - %d", sizeof(boolVariable)); //1
    printf("\nSize of bool - %d", sizeof(boolVariable2)); //1

    return 0;
}