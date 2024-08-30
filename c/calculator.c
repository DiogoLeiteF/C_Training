#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator ( + - / * ): ");
    scanf("%c", &operator);
    
    printf("\nEnter first number: ");
    scanf("%lf", &num1);
    printf("\nEnter second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    
    default:
        printf("\n%c is Not a valid operator", operator);
        break;
    }

    printf("\nThe result is: %.2lf", result);

    return 0;
}
