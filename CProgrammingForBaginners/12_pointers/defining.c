# include <stdio.h>
#include <stddef.h>


int main(int argc, char const *argv[])
{
    int number = 10;
    int *pnumber = &number;

    
    int *pnum2 = NULL; // include stddef.h for NULL
    int *pnum3; //should not be done

    printf("address number: %p\n", &number); 
    printf("pointer pnumber: %p\n", pnumber); // %p format specifier for pointers
    printf("address pnumber: %p\n", (void*)&pnumber); // %p format specifier for pointers
    printf("pointer NULL: %p\n", pnum2);
    printf("pointer declared to no memory address: %p\n", pnum3);

    printf("pnumber size: %d bytes\n", (int)sizeof(pnumber));

    
    
    /*************************************************** 
    dereference a pointer (get the data from the pointer) use the indirection operator *
    *****************************************************/
    printf("Dereference pnumber: %d\n", *pnumber);
    int result = 0;

    result = *pnumber *5;

    printf("result of multiplying *pnumber by 5: %d\n", result);




    return 0;
}
