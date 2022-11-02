#include <stdio.h>

void hello(char[], int);//funtion prototype 

int main()
{
    /*
    funtion prototype

    What is it?
    Function declaration, w/o a body, before main()
    Ensures that calls to a functions are made with the correct arguments
    
    Important Notes:
    * Many C compilers do not check for parameters matching;
    * Missing arguments will result in unexpected behavior;
    * A function prototype causes the compiler to flag an error if arguments are missing
     
    ADVANTAGES:
    1. wEasier to navigate a program w/ main() at the top
    2. Helps with debugging
    3. Comminly used in header files
    */

    
    char name[] = "John";
    int age = 25;

    hello(name, age);//if the number of arguments is not correct the compiler will throw an error

    return 0;
};

// the function hello is declared after the main function
void hello(char name[], int age)
{
        printf("\nHello %s", name);
        printf("\nYou are %d years old", age);
}
