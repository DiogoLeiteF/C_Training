#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXTEXTSIZE 100
#define MAXFILESIZE 100

void clearWord(char *palavra)
{
    /* verificar se o ultimo caracter esta dentro dos valores ASCII para [a-z]
    se não estiver é removido */

    int len = strlen(palavra);

    if (palavra[len - 1] < 97 || palavra[len - 1] > 122)
    {
        palavra[len - 1] = '\0';
        return;
    }
}

void lower(char *palavra)
{
    /* converter a palavra em lower case */
    int len = strlen(palavra);
    for (int i = 0; i < len; i++)
    {
        palavra[i] = tolower(palavra[i]);
    }
}

int palindromo(char buf[])
{
    /* função retorna 1 se a palavra for palindromo ou 0 caso contrario*/

    int pal = 0;
    int len = strlen(buf);

    // procurar os palindromos
    for (int i = 0; i < (int)len / 2; i++)
    {
        if (buf[i] != buf[len - 1 - i])
        {
            pal = 0;
            break;
        }
        else
            pal = 1;
    }
    return pal;
}

int main()
{
    char text[MAXTEXTSIZE][10] = {
        {0},
    };
    char file[MAXFILESIZE];
    int len = 0;
    char palindromos[100][10] = {
        {0},
    };

    printf("Indique o caminho completo para o ficheiro: ");
    gets(file);

    /* abrir o ficheiro */
    char buf[10];
    FILE *ptr = fopen(file, "rt");
    if (ptr == NULL)
    {
        printf("ficheiro não existe.");
        return 1;
    }

    /* ler palavras para a o array text*/
    int i = 0;
    while (fscanf(ptr, "%s", buf) != EOF)
    {
        if (i >= 99)
        {
            printf("não ha mais espaço para guradar texto.");
            break;
        }
        if (strlen(buf) >= 3 && strlen(buf) <= 10)
        {
            strncpy(text[i], buf, 10);
            // printf("%s => %s\n", text[i], buf); //para teste
            i++; // incrementar a posição no array text
        }
    }

    fclose(ptr);

    int palcnt = 0;

    for (int i = 0; i < MAXTEXTSIZE; i++)
    {
        // limpar o texto no final
        clearWord(text[i]);

        // converter em lower case para facilitar a comparação
        lower(text[i]);

        // procurar os palindromos
        if (palindromo(text[i]) == 1)
        {
            // armazenar os palindromos num novo array
            strcpy(palindromos[palcnt], text[i]);
            palcnt++;
        }
    }

    // mostrar palindromos guardados no array "palindromos"
    for (int i = 0; i < MAXTEXTSIZE; i++)
    {
        if (strlen(palindromos[i]) > 0)
            printf("%s\n", palindromos[i]);
    }

    return 0;
}
