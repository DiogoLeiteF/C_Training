#include <stdio.h>

// Calcule as combinações de N, R a R. A fórmula é idêntica à dos arranjos, multiplicar de N-R+1
// até N, mas tem de se dividir pelo factorial de R:

int main()
{

    int n, r, i, comb, j, temp1, temp;

    printf("Calculo das combinacoes de N, R a R:\nIndique N: ");
    scanf("%d", &n);
    printf("indique R: ");
    scanf("%d", &r);

    i = n - r + 1;
    j = 1;
    temp1 = 1;
    

    while (i <= n)
    {
        temp = temp1 * i;
        comb = temp / j;
        printf("%d * %d = %d / %d = %d\n", temp1, i, temp, j, comb);
        temp1 = comb;
        i++;
        j++;
    }
    printf("Resultado: %d", comb);

    return 0;
}