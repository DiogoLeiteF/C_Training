#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char cars[4][10] = {"Mustang", "Corvette", "Camaro"};

    strcpy(cars[0], "Tesla");
    strcpy(cars[3], "Fiat");

    // cars[3] = "Fiat"; // does not work


    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}
