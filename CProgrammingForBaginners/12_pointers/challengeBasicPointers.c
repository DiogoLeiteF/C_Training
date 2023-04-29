# include <stdio.h>
# include<stddef.h>

int main(int argc, char const *argv[])
{
    int number = 10;
    int *pnumber = NULL;

    pnumber = &number;

    printf("number address: %p\n", &number);    
    printf("pointer pnumber address: %p\n", &pnumber);    
    printf("pointer pnumber value: %p\n", pnumber);    
    printf("value pointer pnumber is pointing to: %d\n", *pnumber);    
    printf("number value: %d\n", number);    
   






    return 0;
}
