#include <stdio.h>

int main(){

    unsigned int a = 60; // 0011 1100
    // 0000 0000 0000 0000 0000 0000 0011 1100 32bits
    unsigned int b = 13; // 0000 1101

    int result1 = 0;
    int result2 = 0;
    int result3 = 0;
    int result4 = 0;

    result1 = a & b; // 0000 1100
    result2 = a | b; // 0011 1101
    result3 = ~a; // 1100 0011 
    result4 = a >> 2; //0000 1111 

    printf("result of a & b is %d\n", result1);
    printf("result of a | b is %d\n", result2);
    printf("result of ~a %d\n", result3);
    printf("result of a >> 2 %d\n", result4);

 

    return 0;
}