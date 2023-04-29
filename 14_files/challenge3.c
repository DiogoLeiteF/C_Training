#include <stdio.h>

#define FILENAME "challenge3file.txt"

int main(int argc, char const *argv[])
{
    /*
    read a file in reverse order and print to the console
    */

    FILE *fp = NULL;
    char ch = ' ';
    int position;

    fp = fopen(FILENAME, "r");
    if (fp == NULL)
        return -1;
    // movers the fil pointer to the end of the file
    fseek(fp, 0, SEEK_END);

    position = ftell(fp) -1;

    while (position >= 0)
    {
        fseek(fp, position, SEEK_SET);
        printf("%c",fgetc(fp));
        position--;
    }

    fclose(fp);
    fp = NULL;
    


    return 0;
}
