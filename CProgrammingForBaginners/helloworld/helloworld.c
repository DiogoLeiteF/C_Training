#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char name[12];

    printf("Hello! please enter your age: \n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("whats your name? ");
        scanf("%s", &name);
        printf("hello %s you may enter!", name);
    }else
    {
        printf("Sorry, not for you!");
    }
    

    return 0;
}