#include <stdio.h>
#include <string.h>

void inverter(char str[])
{
    int len = strlen(str);

    for (int i = 0; i < (int) len/2; i++)
    {
        char aux = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = aux;
        printf("%d: %s\n", i, str);
    }
}


int main(int argc, char *argv[])
{
    char str[10];

    printf("Inversão de texto.\n Texto: ");
    gets(str);

    inverter(str);

}