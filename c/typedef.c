#include <stdio.h>
#include <string.h>

// ex1
typedef char testUser [25];

// ex2
// normal
// struct User
// {
//     char name[25];
//     char password[12];
//     int id;
// };

// typedef
typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;




int main(int argc, char const *argv[])
{
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    // char user1[25] = "Tesla";

    // ex1
    testUser user1  = "Tesla";


    // ex2
    // struct User user2 = {"John", "pass123", 2};
    // struct User user3 = {"John", "pass123", 2};

    User user2 = {"Tesla", "pass123", 2};
    User user3 = {"John", "pass456", 2};

    printf("\n%s", user2.name);
    printf("\n%s", user2.password);
    printf("\n%d", user2.id);

    printf("\n%s", user3.name);
    printf("\n%s", user3.password);
    printf("\n%d", user3.id);

    
    

    return 0;
}
