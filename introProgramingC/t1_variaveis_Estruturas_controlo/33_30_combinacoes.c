#include <stdio.h>

int main()
{
    int N, R, comb;
    printf(" Calculo das combinacoes de N, R a R:\n");
    printf("Indique N:");
    scanf("%d", &N);
    printf("Indique R:");
    scanf("%d", &R);

    comb = 1;
    int i = N-R+1;
    int j = 1;
    int tmp = 1;
    int comb_tmp = 1;
    while (i<=N)    
    {
        tmp = comb * i;
        comb_tmp = tmp/j;
        printf("  %d*%d=%d, %d/%d=%d\n", comb, i, tmp, tmp, j, comb_tmp);
        comb = comb_tmp;
        i++;
        j++;
    }
    printf("Resultado: %d", comb);

    return 0;
}