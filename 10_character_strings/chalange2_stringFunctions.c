#include <stdio.h>
#include <string.h>

void reverse();
void bsort();


int main(int argc, char const *argv[])
{
    // reverse();

    // challenge 2

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
    char arrTemp[10]; 

    printf("input %d strings\n", numStrings);
    for (int i = 0; i < numStrings; i++)
    {
        scanf("%s", arr[i]);
    }

    // display original array
    printf("\noriginal\n");
    for (int i = 0; i < numStrings; i++)
        printf("%s\n", arr[i]);

    for (int i = 0; i < numStrings - 1; i++)
    {
        for (int j = 0; j < numStrings - 1 -i ; j++)
        {
            // printf("strcmp %s and %s : %d\n", arr[j], arr[j+1], strcmp(arr[j], arr[j+1]));
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                // printf("Enter strcmp\n");

                strncpy(arrTemp, arr[j], sizeof(arrTemp)-1);
                strncpy(arr[j], arr[j+1], sizeof(arrTemp)-1);
                strncpy(arr[j+1], arrTemp, sizeof(arrTemp)-1);
            }
        }
    }
    // display sorted array
    printf("\nsorted\n");
    for (int i = 0; i < numStrings; i++)
        printf("%s\n", arr[i]);

}


