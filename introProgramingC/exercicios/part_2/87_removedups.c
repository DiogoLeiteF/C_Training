#include <stdio.h>
#include <stdlib.h>

int dups = 0;

void sort(int arr[], int len)
{
    int aux;

    for (int i = 0; i < len; i++)
    {
        for (int j = 0 + i; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

// void removedups(int arr[], int len)
// {
//     for (int i = 0; i < len; i++)
//     {
//         // printf("i: %d valor %d ---- i+1: %d valor %d\n", i, arr[i], i + 1, arr[i + 1]);
//         if (arr[i] == arr[i + 1])
//         {
//             // printf("posicao%d(%d) - posicao%d(%d)\n", i, arr[i], i + 1, arr[i + 1]);
//             // getchar();
//             if (arr[i] == -1)
//                 break;

//             for (int k = i + 1; k < len - 1; k++)
//             {
//                 // printf("%d move to %d\n", arr[k + 1], arr[k]);
//                 arr[k] = arr[k + 1];
//             }
//             arr[len - 1] = -1;
//             dups++;
//             i--;
//         }
//     }
// }

void removedups(int arr[], int len)
{
    for (int i = 0; i < len - dups; i++)
    {
        for (int j = 1 + i; j < len - 1; j++)
        {
            while (arr[i] == arr[j])
            {
                // getchar();
                // printf("arr[%d] %d ---- arr[%d] %d\n", i, arr[i], j, arr[j]);
                for (int k = j; k < len - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                arr[len - 1] = -1;
                if (arr[i] == -1)
                    break;
                dups++;
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
    int len = sizeof(n) / sizeof(n[0]);

    printf("original\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%3d ", n[i]);
    }

    sort(n, len);
    printf("\n\nSorted\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%3d ", n[i]);
    }
    printf("\n");
    removedups(n, len);

    printf("\nElementos que pertencem ao vector: %d ", 1000 - dups);

    printf("\n\nVetor final\n");
    for (int i = 0; i < 1000; i++)
    {
        printf("%3d ", n[i]);
    }
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (n[i] == -1)
            break;
        count++;
    }

    printf("\ncount: %d", count);
}