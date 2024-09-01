#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    BITWISE OPERATORS = Special operators used in bit level programming 
    
    & = AND
    | = OR
    ^ = XOR
    << left shift
    >> rigth shift
    
    */

    int x = 6;  // 6  = 00000110  8 bits 
    int y = 12; // 12 = 00001100  8 bits
    int z = 0;  // 0  = 00000000

    z = x & y;
    printf("AND = %d\n", z); // z = 00000100 = 4

    z = x | y;
    printf("OR = %d\n", z); // z = 00001110 = 14

    z = x ^ y;
    printf("XOR = %d\n", z); // z = 00001010 = 10  // only one bits can be 1

    z = x  << 1;
    printf("left shift = %d\n", z); // z = 00001100 = 12

    z = y  >> 2;
    printf("right shift = %d\n", z); // z = 00000011 = 3



    return 0;
}
