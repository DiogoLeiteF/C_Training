#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char x = 'X';
    char y = 'Y';

    char temp;

    printf("\nx = %c ", x);
    printf("\ny = %c ", y);
    printf("\ntemp = %c ", temp);

    temp = x;
    x = y;
    y = temp;

    printf("\nx = %c ", x);
    printf("\ny = %c ", y);
    printf("\ntemp = %c ", temp);

    // arrays
    char q[] = "string1";
    char w[] = "string2";

    char tempstr[10];

    printf("\nq = %s ", q);
    printf("\nw = %s ", w);
    // printf("\ntempstr = %s ", tempstr);

    strcpy(tempstr, q);
    strcpy(q, w);
    strcpy(w, tempstr);
    
    printf("\nq = %s ", q);
    printf("\nw = %s ", w);
    printf("\ntempstr = %s ", tempstr);

    

    return 0;
}
