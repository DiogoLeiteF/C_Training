#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    // strchr() => search a character
    char str[] = "The quick brown fox"; // string to be searched
    char ch = 'q';
    char ch2 = 'z';         // character to search
    char *pGot_char = NULL; // Pointer initialized to NULL
    char *pGot_char2 = NULL;

    pGot_char = strchr(str, ch); // stores the address where ch is found
    pGot_char2 = strchr(str, ch2);

    printf("%s\n", pGot_char);

    if (pGot_char2 == NULL)
    {
        printf("not found\n");
    }

    printf("\n\n");

    // strstr() => search a substring
    char text[] = "Every dog has a day";
    char word[] = "dog";
    char *pFound = NULL;
    pFound = strstr(text, word);

    printf("%s\n", pFound);

    printf("\n\n");

    // strtok() => search for a token
    char string[] = "Hello how are you - my name is - john";
    const char s[] = "-";

    char *token;

    // get the first token
    token = strtok(string, s);

    // printf("%s\n", token);

    /* walk through other tokens*/
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }

    return 0;
}
