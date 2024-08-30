#include <stdio.h>

int main(int argc, char const *argv[])
{
    double prices[6] = {1.0, 2.0, 3.0, 4.0, 5.0};
    prices[5] = 6.0;


    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        printf("\n$ %.2lf", prices[i]);
    }

    return 0;
}
