#include <stdio.h>
#include <string.h>

int main()
{
    /*
    strlen => length of a string
    strcpy() and strncpy() => copying one character string to another
    strcat() and strncat() => Combining two character strings
    strcmp() and strncmp => compare
    */

    // strlen() 
    char myString[] = "my string";
    printf("length of myString: %d\n", strlen(myString));



    // strcpy()
    char s[100]; // declare
    // s = "Hello"; => does not work

    char src[50], dest[5], dest2[50];
    strcpy(src, "This is the source");
    // strcpy(dest, "This is the destination");  // overflow error
    // strncpy() controls the overflow
    strncpy(dest, "This is the destination", sizeof(dest)-1);

    printf("%s\n%s\nsize of dest: %d\n", src, dest, sizeof(dest));

    // strncat()
    strncpy(dest2, "This is the destination", sizeof(dest2)-1);
    
    strncat(dest2, src, 15);

    printf("The final string: | %s |\n\n", dest2);



    // strcmp()
    printf("strcmp \"A\" and \"A\" : %d\n", strcmp("A", "A"));
    printf("strcmp \"A\" and \"B\" : %d\n", strcmp("A", "B"));
    printf("strcmp \"B\" and \"A\" : %d\n", strcmp("B", "A"));
    printf("strcmp \"C\" and \"A\" : %d\n", strcmp("C", "A"));
    printf("strcmp \"A\" and \"a\" : %d\n", strcmp("A", "a"));
    printf("strcmp \"apples\" and \"apple\" : %d\n", strcmp("apples", "apple"));

    // strncmp() => only compares "n" characters
    if (strncmp("astronomy", "astro", 5) == 0)
    {
        printf("Found astronomy\n");
    }
    if (strncmp("astounding", "astro", 5) == 0)
    {
        printf("Found astounding\n");
    }

    



    return 0;
}