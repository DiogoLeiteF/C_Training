#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b;
    char c;

    printf("enter the operation: ");
    scanf("%f %c %f", &a, &c, &b );

    printf("%f, %f, %c\n", a, b, c);

    switch (c)
    {
    case '+':
        printf("%.2f", a + b);
        break;
    case '-':
        printf("%.2f", a - b);
        break;
    case '*':
        printf("%.2f", a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("Division by zero");
            break;
        } 
        else
        {
            printf("%.2f", a / b);
            break;
        }
    
    default:
        printf("Wrong operator!");
        break;
    }

    return 0;
}


