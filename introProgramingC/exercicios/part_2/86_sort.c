#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int len)
{
    int aux;

    for (int i = 0; i < len; i++)
    {
        for (int j= 0 + i; j<len; j++)
        {
            if(arr[i] > arr[j])
            {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

int main()
{
    int n[1000];

    srand(1);

    for (int i = 0; i < 1000; i++)
    {
        n[i] = rand() % 1000;
    }
    int len = sizeof(n)/sizeof(n[0]);

    printf("original\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%3d ", n[i]);
    }

    sort(n, len);
    printf("\n\nSorted\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%3d ", n[i]);
    }

    printf("\nquadril 25, 50 e 75: %3d %3d %3d", n[250], n[500], n[750]);









}