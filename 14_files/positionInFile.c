#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    ftell()
    fgetpos()

    long ftell(FILE *pfile);

    EX:
    long fpos = ftell(pfile);

    fpos holds the current possition in the file
    >> the value is the offset in bytes from the beginning of the file
    */

    FILE *fp;
    int len;

    fp = fopen("file5.txt", "r");

    if (fp == NULL)
    {
        perror("error opening file");
        return (-1);
    }

    fseek(fp, 0, SEEK_END); // move cursor to the end of file

    len = ftell(fp);
    fclose(fp);

    printf("Total size of the file5.txt = %d bytes\n", len);

    /*
    int fgetpos(FILE *pfile, fpos_t *position);

    >>first parameter is a file pointer
    >> second parameter is a pointer to a type that is defined in stdio.h
         >>fpos_t - a type that is able to record every position within a file
    >>the fgetpos() is designed to be used with the positioning function fsetpos()
    >> returns 0  if ok else nonzero

    fpos_t here;
    fgetpos(pfile, &here)
    */

    FILE *fp2;
    fpos_t position;

    fp2 = fopen("file6.txt", "w+");
    fgetpos(fp2, &position);

    fsetpos(fp2, &position);

    fputs("Hello world!", fp2);

    fclose(fp2);

    /*
    SETTING A POSITION IN A FILE
    */
    /*

    fseek() >> complement to ftell()

    int fseek(FILE *pfile, long offset, int origin)
    >> first parameter is a poiter to a file
    >> second parameter is an offset from the reference point in the 3 parameter
    >> reference point can be one of 3 options:
        >>> SEEK_SET - beginning of the file
        >>> SEEK_CUR - current position
        >>> SEEK_END - end of the file

*/
    FILE *fp3;

    fp3 = fopen("file6.txt", "w+");
    fputs("this is some text", fp3);

    fseek(fp3, 7, SEEK_SET);

    fputs("Hello how are you", fp3);
    fclose(fp3);

    /*
    int fsetpos(FILE *pfile, const fpos_t *position);

    >> uses the data from fgetpos()
    >> only allows to to move to a place were you already have been
    */

    FILE *fp4;
    fpos_t position2;

    fp4 = fopen("file6.txt", "w+");

    fgetpos(fp4, &position2); // record the position

    fputs("Hello World!", fp4);

    fsetpos(fp4, &position2);
    fputs("This is going to override previous content", fp4);

    fclose(fp4);

    return 0;
}
