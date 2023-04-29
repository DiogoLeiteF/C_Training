#include <stdio.h>
#include <stdlib.h>

#define FILENAME "challenge1file.txt"

int main(int argc, char const *argv[])
{
    FILE *fp = NULL;
    int counter = 0;
    char c;

    fp = fopen(FILENAME, "r");

    if (fp == NULL)
    {
        printf("error");
        perror("File not opened");
        return (-1);
    }

    while ((c = fgetc(fp)) != EOF)
    {
        if (c == '\n')
            counter++;
    }

    fclose(fp);
    fp = NULL;

    printf("%d lines in file", ++counter); 

    return 0;
}
