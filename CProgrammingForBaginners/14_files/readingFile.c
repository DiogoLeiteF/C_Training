#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    int c;

    fp = fopen("file1.txt", "r");

    if (fp == NULL)
    {
        perror("Error opening file");
        return -1;
    }

    // read a single char at a time
    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }

    fclose(fp);
    fp = NULL;

    printf("\n\n");
    /*
    read a string from file:
    char *fgets(char* str, int nchars, FILE *stream)

    the function reads a string into the memory area pointer to by str, from the file in stream
    -> characters are read until either a '\n' or nchars-1
    ->if newline character is read, it's retained in the string
    -> a '\0' char will be appended to the end of the string
    -> if no error, fgets() returns  the pointer str otherwise NULL is returned
    -> reading EOFcauses NULL to be returned
    */

    FILE *fp2;
    char str[60];

    // opening file for reading
    fp2 = fopen("file1.txt", "r");

    if (fp2 == NULL)
    {
        perror("Error opening file\n");
        return -1;
    }
    // get data from file
    if (fgets(str, 60, fp2) != NULL)
    {
        // writing content to stdout
        printf("%s", str);
    }

    while ((fgets(str, 60, fp2) != NULL))
    {
        printf("%s", str);
    }

    fclose(fp2);
    fp2 = NULL;

    printf("\n\n");

    /*
    get formatted data from file

    int fscan(FILE *stream, const char *format, ...)

    ->first argument is the pointer to the file
    ->the second argument is the format
        -> a C string that contains one or more of the following items:
            >> whitespace character
            >> non-whitespace character
            >> format specifiers
    >> usage is similar to scanf, but from a file
   */

    char str1[10], str2[10], str3[10];
    int year;
    FILE *fp3;

    fp3 = fopen("file3.txt", "w+");
    if (fp3 != NULL)
    {
        printf("fputs");
        fputs("Couldn't open the file, so write this shit.", fp3);
    }
    rewind(fp3);

    fscanf(fp3, "%s %s %s %d", str1, str2, str3, year);

    printf("Read string 1 >> %s\n", str1);
    printf("Read string 2 >> %s\n", str2);
    printf("Read string 3 >> %s\n", str3);
    printf("Read year >> %i\n", year);

    fclose(fp3);
    fp3 = NULL;

    return 0;
}
