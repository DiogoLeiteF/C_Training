#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    int r;

    srand(time(NULL));


    while (i < 100)
    {
        r = rand() % 21;

        printf("%d\n", r);
        i++;
    }

    return 0;
}
