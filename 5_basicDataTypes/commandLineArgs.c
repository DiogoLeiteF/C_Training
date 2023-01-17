# include <stdio.h>

int main(int argc, char *argv[])
{
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("\nNumber os Arguments: %d", numberOfArguments);
    printf("\nArgument1 is the program name: %s", argument1);
    printf("\nArgument2 is the command line argument: %s", argument2);


    return 0;
}
