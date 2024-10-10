#include <stdio.h>

int trocos(float val[], char *text[], int len, double montante)
{
    int count = 0;
    int i = 0;
    int moedas = 0;
    montante += 0.005;

    printf("montante: %f\n", montante);

    while (i < len)
    {
        // getchar();

        // printf("montante = %lf\n", montante);
        // printf("i: %d\n", i);

        count = (int)(montante / val[i]);
        // printf("count: %d\n", count);
        if (count > 0)
        {
            printf("%s: %d\n", text[i], count);
            montante -= val[i] * count;
            moedas += count;
        }

        i++;
    }
    printf("Numero moedas: %d\n", moedas);
    return moedas;
}

int main()
{
    float valores[8] = {2.0, 1.0, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01};
    char *text[8] = {"2 euros", "1 euro", "50 cent", "20 cent", "10 cent", "5 cent", "2 cent", "1 cent"};

    int moedas = 0;
    double montante;

    // printf("Introduza um montante em euros, podendo ter centimos: ");
    // scanf("%lf", &montante);

    // printf("\nMontante: %.3lf\n", montante);
    int totalmoedas = 0;
    for (float i = 0.01; i <= 20; i = i * 2 + 0.01)
    {
        totalmoedas += trocos(valores, text, 8, i);
    }

    printf("\nTOTAL MOEDAS: %d", totalmoedas);
    return 0;
}