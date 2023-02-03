#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *str = NULL;

    // initial memoory allocation
    str = (char *)malloc(15*sizeof(char));
    strcpy(str, "jason");
    printf("String = %s, Address = %p\n", str, str);

    // reallocating memory
    str = (char *)realloc(str, 25*sizeof(char));
    strcat(str, ".com");
    printf("String = %s, Address = %p\n", str, str);

    free(str);

    return 0;
}
