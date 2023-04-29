#include <stdio.h>

int gdc(int a, int b);
float absolute(float number);
float square(float number);

int main(int argc, char const *argv[])
{
    int d;
    float abs;
    float sq;

    d = gdc(270, 192);
    printf("%d\n", d);

    abs = absolute(-10.5);
    printf("absolute %.3f\n", abs);

    sq = square(16);
    printf("square root %.3f\n", sq);

    return 0;
}

int gdc(int a, int b)
{
    int temp;

    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

float absolute(float number)
{
    if (number < 0)
    {
        number = -number;
    }
    return number;
}

float square(float number)
{
    const float epsilon = 0.00001;
    float guess = 1.0;

    if (number != absolute(number))
    {
        printf("\nno square root for negative number\n");
        return -1;
    }
    else
    {
        while (absolute(guess * guess - number) >= epsilon)
        {
            guess = (number / guess + guess) / 2.0;
        }
    }
    return guess;
}