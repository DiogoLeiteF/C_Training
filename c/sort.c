#include <stdio.h>


void sort(int array[], int arraylen)
{
    int temp;

    for(int i = 0; i < arraylen; i++)
    {
        printf("\nout loop - %d", array[i]);
        for(int j = i+1; j < arraylen; j++)
        {
            printf("\nin loop - %d", array[j]);
            if(array[j] < array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                printf("\nchange - %d << %d", array[i], array[j]);
            }
        }
    }
}

void bubbleSort(int array[], int arraylen)
{
    int temp;

    for(int i = 0; i < arraylen; i++)
    {
        printf("\nout loop - %d", array[i]);
        for(int j = 0; j < arraylen -1 - i; j++)
        {
            printf("\nin loop - %d", array[j]);
            if(array[j+1] < array[j])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                printf("\nchange - %d << %d", array[j+1], array[j]);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int array[] = {9, 8, 1, 3,10, -1, -100, 5, 6, 2, 2};

    int arraylen = sizeof(array)/sizeof(array[0]);
    int temp;

    // sort(array, arraylen);
    bubbleSort(array, arraylen);


    printf("\nfinal\n");

    for(int i = 0; i< arraylen; i++)
    {
        printf("%d", array[i]);
    }





    return 0;
}
