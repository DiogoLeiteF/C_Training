#include <stdio.h>
#include <string.h>


int main(){

    char name[25];
    int age;

    printf("\nwhats your name?\t");
    // scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';


    printf("\nHow old are you?\t");
    scanf("%d", &age);


    printf("\nhello %s, you are %d years old.", name, age);


    return 0;
}