#include <stdio.h>

int main()
{
    printf("\nSize of: char => %zd bytes", sizeof(char));
    printf("\nSize of: short: => %zd bytes", sizeof(short));
    printf("\nSize of: int => %zd bytes", sizeof(int));
    printf("\nSize of: long => %zd bytes", sizeof(long));
    printf("\nSize of: long long => %zd bytes", sizeof(long long));
    printf("\nSize of: float => %zd bytes", sizeof(float));
    printf("\nSize of: double => %d bytes", sizeof(double));
    printf("\nSize of: long double => %u bytes", sizeof(long double));



    return 0;
}
