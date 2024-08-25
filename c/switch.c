#include <stdio.h>


int main(int argc, char const *argv[])
{
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("perfect\n");
        break;
    case 'B':
        printf("great\n");
        break;
    case 'C':
        printf("ok\n");
        break;
    case 'D':
        printf("not an F\n");
        break;
    case 'F':
        printf("you failed\n");
        break;
    
    default:
        printf("Enter a valid choice\n");
        break;
    }


    return 0;
}
