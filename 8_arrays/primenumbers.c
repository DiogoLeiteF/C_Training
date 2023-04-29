#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int primes[30] = {2,0,};
    int pos = 1;
    bool marker = false;

    for (int i = 3; i <= 100; i = i+2)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                marker = false;
                break;
            }
            else{
                marker = true;
            }
        }
        if (marker){
            primes[pos] = i;
            pos++;
        }
    }

    for (int i = 0; i < sizeof(primes)/sizeof(primes[0]); i++)
    {
        printf("%d\n", primes[i]);
    }
    

    return 0;
}
