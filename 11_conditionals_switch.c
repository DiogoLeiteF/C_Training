#include <stdio.h>

int main()
{

    /*
    Switch = A more efficient alternative to using many 'else if' statements
            allows for a value to be tested for equality against many cases
    */

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("perferct\n");
        break;
    case 'B':
        printf("You did good\n");
        break;
    case 'C':
        printf("You did ok\n");
        break;
    case 'D':
        printf("At least it's not an F\n");
        break;
    case 'F':
        printf("You Faled");
        break;
    default:
        printf("This is not a vaslid grade\n");
        break;
    };

        // if - else
    //    if (grade == 'A'){
    //     printf("perfect\n");
    //    }
    //    else if (grade == 'B')
    //    {
    //     printf("You did good!\n");
    //    }
    //    else if (grade =='C')
    //    {
    //     printf("You did ok!");
    //    }
    //    else if (grade == 'D')
    //    {
    //     printf("At least it's notr an F\n");
    //    }
    //    else if (grade == 'F')
    //    {
    //     printf("You Failed...\n");
    //    }
    //    else
    //    {
    //     printf("That's not a valid grade\n");
    //    };




    return 0;
}