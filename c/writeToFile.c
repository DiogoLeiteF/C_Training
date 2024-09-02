#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *pF = fopen("test.txt", "w");

    fprintf(pF, "Some text");

    fclose(pF);


    // if(remove("test.txt") == 0)
    // {
    //     printf("REMOVED");
    // }
    // else{
    //     printf("NOT removed");
    // }

    return 0;
}
