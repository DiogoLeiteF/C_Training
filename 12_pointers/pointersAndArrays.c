#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    /*
    Example 1
    */
    char multiple[] = "a string";
    char *p = multiple;

    for (int i = 0; i < strlen(multiple); ++i)
    {
        printf("multiple[%d] = %c || (p + %d) = %c || &multiple[%d] = %p || p + %d = %p\n", i, multiple[i], i, *(p + i), i, &multiple[i], i, p + i);
        // printf("multiple[%d] = %c \n", i, multiple[i]);
        // printf("(p + %d) = %c \n", i, *(p+i));
        // printf("&multiple[%d] = %p\n", i, &multiple[i]);
        // printf("p + %d = %p\n\n\n", i, p+i);
    }

    printf("\n\n");

    /*
    Example 2
    */
    long list[] = {15L, 25L, 35L, 45L};
    long *plist = list;

    for (int i = 0; i < sizeof(list) / sizeof(list[0]); i++)
    {
        printf("adderss plist + %d (&list[%d]): %llu    *(plist + %d) value: %d\n", i, i, (unsigned long long) (plist + i), i, *(plist + i));
    }
    printf("\nType long occupies: %d bytes", (int)sizeof(long));

    return 0;
}
