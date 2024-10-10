#include <stdio.h>

int main()
{
    char *romanos[13] = {
        "M",
        "CM",
        "D",
        "CD",
        "C",
        "XC",
        "L",
        "XL",
        "X",
        "IX",
        "V",
        "IV",
        "I",
    };
    char str[20];
    int dec = 0;
    int err = 0;
    char errchar;

    printf("Introduz o valor em numeracao romana: ");
    gets(str);

    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == 'M')
        {
            dec += 1000;
        }
        else if (str[i] == 'C')
        {
            if (str[i + 1] == 'M')
            {
                dec += 900;
                i++;
            }
            else if (str[+1] == 'D')
            {
                dec += 400;
                i++;
            }
            else
                dec += 100;
        }
        else if (str[i] == 'D')
        {
            dec += 500;
        }
        else if (str[i] == 'X')
        {
            if (str[i + 1] == 'C')
            {
                dec += 90;
                i++;
            }
            else if (str[+1] == 'L')
            {
                dec += 40;
                i++;
            }
            else
                dec += 10;
        }
        else if (str[i] == 'I')
        {
            if (str[i + 1] == 'X')
            {
                dec += 9;
                i++;
            }
            else if (str[+1] == 'V')
            {
                dec += 4;
                i++;
            }
            else
                dec += 1;
        }
        else if(str[i] == 'V')
        {
            dec += 5;
        }
        else
        {
            errchar = str[i];
            err = 1;
            break;
        }
        i++;
    }
    if (err == 1)
    {
        printf("Caracter nao valido encontrado: %c", errchar);
    }
    else
    {
        printf("%s  =  %d", str, dec);
    }
}