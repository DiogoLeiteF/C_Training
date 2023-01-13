#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum company var1 = XEROX;
    enum company var2 = GOOGLE;
    enum company var3 = EBAY;

    printf("\n%d", var1);
    printf("\n%d", var2);
    printf("\n%d", var3);




    return 0;
}
