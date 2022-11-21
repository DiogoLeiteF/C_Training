#include <stdio.h>

int main()
{
    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory (house), used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    int d = 10;
    double e = 10.0;

    int f[5];


    printf("%d bytes\n", sizeof(a) );
    printf("%d bytes\n", sizeof(b) );
    printf("%d bytes\n", sizeof(c) );
    printf("%d bytes\n", sizeof(d) );
    printf("%d bytes\n", sizeof(e) );
    printf("%d bytes\n", sizeof(f) );

    // display the address %p
    printf("address for a ==>    %p \n", &a );
    printf("address for b ==>    %p \n", &b );
    printf("address for c ==>    %p \n", &c );
    printf("address for d ==>    %p \n", &d );
    printf("address for e ==>    %p \n", &e );
    printf("address for f ==>    %p \n", &f );

    /*
    the locations are continuous but depend on the size of the data type:
    char = 1 bite, means that the addresses will have the diference of 1 between them;
    int = 4 bites, addresses will have 4 spaces for each int
    int arr[2] = 4*2 bytes
    an array will depend on the data type an the size of the array 
    */

    return 0;
}