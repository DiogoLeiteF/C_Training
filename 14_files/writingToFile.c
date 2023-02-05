#include <stdio.h>

int main(int argc, char const *argv[])
{

    /*
    Writing Characters to a text file

    int fputc(int ch, FILE *pfile);

    >> returns the character that was written if successful, else return EOF
    */

    FILE *fp;
    int ch;

    fp = fopen("file4.txt", "w+");

    for (ch = 33; ch <= 100; ch++)
        fputc(ch, fp);

    fclose(fp);
    fp = NULL;


    /*
    Writing a String to a text file:

    int fputs(const char *str, FILE *pfile);

    >> does NOT write the null terminator character to the file '\0'
    */

   FILE *fp2;

   fp2 = fopen("file5.txt", "w+");

   fputs("This is the first string.\n", fp2);
   fputs("This is other string", fp2);

   fclose(fp2);


   /*
   writing formated output to a file
   int fprintf(FILE *stream, const char *format,...);

   */
  FILE *fp3;

  fp3 = fopen("file5.txt", "a+");

    fprintf(fp3, "\nHello my %s is %d", "number", 111 );

    fclose(fp3);




    return 0;
}
