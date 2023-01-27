#include <stdio.h>

int count(char arr[]);

int main(int argc, char const *argv[])
{
    int result = count("ola");
    printf("%d", result);
    return 0;
}




int count(char arr[]){
    int length = 0;
    int i = 0;
    // while (arr[i] != '\0')
    // {
    //     length++;
    //     i++;
    // }

    for (i ; arr[i] != '\0'; i++);
    return i;
}