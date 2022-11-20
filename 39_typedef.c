#include <stdio.h>
#include <string.h>

// ex 2.1
// typedef char user[25];

// ex 3.1
typedef struct 
{
    char name[25];
    char password[12];
    int id;
} User; // name in the bottom


int main()
{

    // ex1
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    // char user1[25] = "John";

    // ex2.2
    // user user1 = "John";


    // ex 3.2 similar to a struct
    User user1 = {"John", "password123", 123456789};
    User user2 = {"Arya", "password123", 987456789};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);
    return 0;
}