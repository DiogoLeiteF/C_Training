// 1:17:45
#include <stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("\nEnter number 1: ");
    scanf("%lf", &num1);

    printf("\nEnter number 2: ");
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
        printf("\n%c Not a valid operator...", operator);
        return 0;
    }

    printf("\n%lf %c %lf = %lf", num1, operator, num2, result);

    return 0;
}