#include <stdio.h>

int main()
{
    int n, res = 0;
    printf("Calculo do valor da funcao Fibonacci:\n");
    printf("Indique N:");
    scanf("%d", &n);
    if (n == 1 || n == 2)
    {
        res = n;
    }
    else
    {   int prev_prev_res = 1;
        int prev_res = 2;
        int i = 3;
        while (i <= n)
        {
            res = prev_prev_res + prev_res;
            printf("  Fib(%d)=%d\n", i, res);
            prev_prev_res = prev_res;
            prev_res = res;
            i++;
        }
        
    }
    printf("Resultado: %d", res);
    return 0;
}