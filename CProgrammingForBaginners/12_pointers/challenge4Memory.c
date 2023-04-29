#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str = NULL;
    int size;

    // get the size of the string
    printf("Enter the size of the string: ");
    scanf("%d", &size);

    // allocate the desired memory for the string
    str = (char *)malloc(size * (int)sizeof(char));

    if (str != NULL)
    {
        // get the string
        printf("\nEnter the string: \n");
        // scanf("%s", str);
        scanf(" ");
        gets(str);

        printf("the text is:\n%s\n", str);
    }
    free(str);
    str = NULL;

    return 0;
}
