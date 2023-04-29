#include <stdio.h>

int main()
{

    FILE *pF = fopen("test.txt", "a");

    fprintf(pF, "some other stuff");

    fclose(pF);

    // if (remove("test.txt") == 0)
    // {
    //     printf("file deleted");
    // }
    // else
    // {
    //     printf("file NOT deleted");
    // }

    return 0;
}