#include <stdio.h>

int main()
{

    // while loop => checks a condition, Then executes a block of code if condition is true
    //  do while loop => always executes a block of code once, Then check a condition

    int number = 0;
    int sum = 0;

    do
    {
        printf("\nEnter a # above 0: ");
        scanf("%d", &number);
        if (number > 0)
        {
            sum += number;
        }

    } while (number > 0);

    printf("The sum is: %d", sum);

    return 0;
}