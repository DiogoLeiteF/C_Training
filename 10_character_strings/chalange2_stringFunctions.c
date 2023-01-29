#include <stdio.h>
#include <string.h>

void reverse();
void bsort();

int main(int argc, char const *argv[])
{
    // reverse();
    bsort();
    return 0;
}

void reverse()
{
    char arr[50], new[50];
    int length;
    printf("Enter the string to reverse: \n");
    scanf("%s", arr);

    length = strlen(arr);

    // printf("%d\n", length);

    for (int i = 0; i < length; i++)
    {
        new[i] = arr[length - (i + 1)];
    }

    printf("%s", new);
}

void bsort()
{
    int numStrings = 0;
    printf("Input the number of strings: ");
    scanf("%d", &numStrings);
    char arr[numStrings][10];

    printf("input %d strings\n", numStrings);
    for (int i = 0; i < numStrings; i++)
    {
        scanf("%s", arr[i]);
    }

    // for (int i = 0; i < numStrings; i++)
    //     printf("%s", arr[i]);

    

}
