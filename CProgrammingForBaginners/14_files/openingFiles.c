#include <stdio.h>

int main(int argc, char const *argv[])
{
    // FILE *fopen(const char* restrict name, const char* restrict mode);

    /*
    FILE MODES
    Mode
    "w
    Opens a text file for write operations.
    If the file exists, its current contents are discarted "

    "a"
    Opens a text file for append operations.
    All writes are to the end of the file

    "r"
    Open a text file for read operations
    __________________________________________________________________________________

    "w+"
    Opens a texte file for update (reading and writing)
    First truncating the file to zero if ir exists or creating the file if it does not exist

    "a+"
    Opens a text file for update (reading and writing)
    appending to the end of the existing file,
    or creating the file if it does not exist

    "r+"
    Open a text file for update (for both reading and writing)

    */

    FILE *pfile = NULL;
    char *filename = "myfile.txt";
    pfile = fopen(filename, "w"); // opens file to "w" write etc
    if (pfile == NULL)
        printf("Failed to open %s\n", filename);

    /*********************************************
      RENAME FILE
    *********************************************/

    // int rename(const char* oldname, const char* newname);
    // file must NOT be open
    // rename() will return 0 if successful otherwise return a non zero

    char *newname = "myfile_copy.txt";

    if (rename(filename, newname))
        printf("\nFailed to rename\n");
    else
        printf("File renamed successfully\n");



    /**********************************************
     CLOSING A FILE
    **********************************************/

    //    int fclose(*file);
    // fclose() return 0 if successful, otherwise -1
    fclose(pfile);
    pfile = NULL; 


    if(fclose(pfile)==0)
    printf("Closed\n");
    else
    printf("link broken\n");
    

    /**********************************************
     REMOVE A FILE
    **********************************************/

   remove(newname);

    return 0;
}
