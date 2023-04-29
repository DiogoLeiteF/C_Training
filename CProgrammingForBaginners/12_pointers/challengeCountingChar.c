# include <stdio.h>

int length( const char[]);

int main(int argc, char const *argv[])
{
    printf("%d\n", length("teste"));
    printf("%d\n", length("t"));
    printf("%d\n", length(""));
    return 0;
}

int length(const char *str)
{
    const char *lastAddress = str;
    

    while (*lastAddress)
        ++lastAddress;
 
    
       
    return lastAddress - str;
}
