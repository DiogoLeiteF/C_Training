#include <stdio.h>
#include <stdbool.h>

int count(char arr[]);
void concatenate(char arr1[], char arr2[]);
bool equal(char arr1[], char arr2[]);

int main(int argc, char const *argv[])
{
    int result = count("ola");
    printf("%d\n", result);

    concatenate("hello", " something");


    equal("hello", "helloo");


    return 0;
}

int count(char arr[])
{
    int length = 0;
    int i = 0;
    // while (arr[i] != '\0')
    // {
    //     length++;
    //     i++;
    // }

    for (i; arr[i] != '\0'; i++)
        ;
    return i;
}

void concatenate(char arr1[], char arr2[])
{
    char result[100];
    int i = 0;
    for (i; (result[i] = (char)arr1[i]) != '\0'; i++)
        ;
    // printf("%s\n", result);
    for (int j = 0; (result[i] = (char)arr2[j]) != '\0'; j++, i++)
        ;
    
    printf("%s\n", result);

    return;
}

bool equal(char arr1[], char arr2[])
{
    bool result = false;
    
    for (int i  = 0; ((arr1[i] != '\0') || (arr2[i] != '\0')); i++)
    {
        printf("%c | %c\n", arr1[i], arr2[i]);
        if (arr1[i] != arr2[i]){
            result = false;
            break;
        }
        else{
            result = true;
        }
    }
    printf("%s\n", result ? "true" : "false" );
    return result;
}
