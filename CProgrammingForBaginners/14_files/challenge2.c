#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>

#define FILENAME "challenge2file.txt"

int main(int argc, char const *argv[])
{
    FILE *fp = NULL;
    FILE *fp2 = NULL;
    char ch = ' ';

    fp = fopen(FILENAME, "r");

    if (fp == NULL)
        return -1;

    fp2 = fopen("temp.txt", "w+");

    if (fp2 == NULL)
        return -1;

    while ((ch = fgetc(fp)) != EOF)
    {
        if (islower(ch))
        {
            ch = ch - 32;
        }

        fputc(ch, fp2);
    }

    fclose(fp);
    fp = NULL;
    fclose(fp2);
    fp2 = NULL;

    remove(FILENAME);
    rename("temp.txt", FILENAME);
    remove("temp.txt");

    fp = fopen(FILENAME, "r");
    if (fp == NULL)
        return -1;

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}
