#include <stdio.h>
#include <time.h>

#define a 231533
#define b 82571
#define m 428573

unsigned int seed = 0;

unsigned int rand()
{
    seed = (a * seed + b) % m;
    return seed;
}


int main()
{

    int seed = 1282148053;
    // int seed = time(NULL);
    int max;

    printf("Gerador de numeros aleatórios inteiros.\nValor Maximo: ");
    scanf("%d", &max);
    max++; 
    printf("Seed = %d: ", seed);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", rand() % max );
    }


}

// /* as constantes utilizadas, podem ser definidas como macros,
// de forma a aparecerem no início do programa. */
// #define RAND_A 231533
// #define RAND_B 82571
// #define RAND_M 428573

// /* variável global, com a semente/valor da última geração */
// unsigned int seed = 0;

// /* definição de uma função rand. Já existe uma função rand
// nas bibliotecas, que pode ser utilizada nos exercícios seguintes. */
// unsigned int rand()
// {
//     seed = (RAND_A * seed + RAND_B) % RAND_M;
//     return seed;
// }

// int main()
// {
//     int n, i;
//     printf("Gerador de numeros aleatorios inteiros.\nValor maximo: ");
//     scanf("%d", &n);
//     n++;
//     /* inicializar a semente com o tempo */
//     // seed = time(NULL);
//     /*seed=1;*/
//     printf("seed=%d: ", seed);
//     for (i = 0; i < 10; i++)
//         printf("%d ", rand() % n);
//     printf("\n");
// }