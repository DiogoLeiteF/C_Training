#include <stdio.h>
#include <string.h>

int main()
{

    char name[25]; // bytes
    int age;

    printf("\nWhat's your name? ");
    // scanf to read input  -->  (specify the data type , assign to a variable)
    // scanf("%s", &name); // works for a single word, reads until any white space

    // to read multiple words we need to use fgets()
    fgets(name, 25, stdin);        // reads new line until the next line symbol
    name[strlen(name) - 1] = '\0'; // to eleminate the lats char from the sring

    printf("\nHello, %s!", name);

    printf("\nHow old are you? ");
    // scanf to read input  -->  (specify the data type , assign to a variable)
    scanf("%d", &age);

    printf("You are %d years old.", age);

    return 0;
}