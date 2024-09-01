#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a  = 'A';
    short b;
    int c;
    double d;
    int e[3];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));
    printf("%d bytes\n", sizeof(d));
    printf("%d bytes\n", sizeof(e));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);
    printf("%p\n", &e);

    return 0;
}
