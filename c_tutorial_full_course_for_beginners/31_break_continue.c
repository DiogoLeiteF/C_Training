#include <stdio.h>

int main()
{

    // continue => skips rest of code & forces the next iteration of the loop
    // break => exits a loop / switch

    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("\n%d", i);
    }

    for (int i = 1; i <= 20; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("\n%d", i);
    }

    return 0;
}