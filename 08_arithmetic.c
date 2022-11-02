#include <stdio.h>

int main()
{

    int x = 5;
    int y = 2;

    // arithmetic operators

    // + (addition)
    // - (subtraction)
    int w = x - y;

    // * (multiplication)
    // / (division)
    // in division the result and the divisor must be float or double
    int z = x / y;
    float zz = x / (float)y;

    // % (modulus)
    int m = x % y;

    printf("5 - 2 = %d\n", w);
    printf("int 5 / int 2 = %d\n", z);
    printf("int 5 / float 2 = %f\n", zz);
    printf("5 \%  2 = %d\n", m);

    // ++ (increment)
    // -- (decrement)

    x++;
    y--;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    /*
        augmented assignment operators = used to replace a statement where an operator takes a
                                         variable as one of its atguments and thenn assigns the result back to the same variable
                                         x = x + 1
                                         x += 1
    */

    x += 10;
    printf("x+=10 = %d\n", x);

    x -= 5;
    printf("x-=5 = %d\n", x);

    x *= 3;
    printf("x*=3 = %d\n", x);

    x /= 5;
    printf("x/=5 = %d\n", x);

    x %= 2;
    printf("x%=2 = %d\n", x);

    return 0;
}