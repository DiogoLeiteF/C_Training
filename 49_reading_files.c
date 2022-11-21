#include <stdio.h>

int main()
{
    FILE *pF = fopen("test.txt", "r");

    // create a buffer to read 1 line at a time:
    char buffer[255];

    // to read 1 line only
    // fgets(buffer, 255, pF);
    // printf("%s", buffer );

    // check if file exists
    if (pF == NULL)
    {
        printf("Unable to open file");
    }
    else
    {
        // to read all file:
        while (fgets(buffer, 255, pF) != NULL)
        {
            printf("%s", buffer);
        }
    }

    fclose(pF);

    return 0;
}