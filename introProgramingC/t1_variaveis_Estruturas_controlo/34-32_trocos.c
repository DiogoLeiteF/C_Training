#include <stdio.h>

int main()
{
    double montante = 0;
    int dois_euros = 0, euro = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;

    printf(" Introduza um montante em euros, podendo ter centimos: ");
    scanf("%lf", &montante);

    montante = montante + 0.005;

    dois_euros = montante / 2;
    if (dois_euros > 0)
    {
        montante -= dois_euros * 2;
        printf("2 euros: %d\n", dois_euros);
    }
    euro = montante / 1;
    if (euro > 0)
    {
        montante -= euro;
        printf("1 euro: %d\n", euro);
    }
    cinquenta = montante / 0.5;
    if (cinquenta > 0)
    {

        montante -= (cinquenta * 0.5);
        printf("50 centimos: %d\n", cinquenta);
    }

    vinte = montante / 0.2;
    if (vinte > 0)
    {
        montante -= (vinte * 0.2);
        printf("20 centimos: %d\n", vinte);
    }

    dez = montante / 0.1;
    if (dez > 0)
    {
        montante -= (dez * 0.1);
        printf("10 centimos: %d\n", dez);
    }

    cinco = montante / 0.05;
    if (cinco > 0)
    {
        montante -= (cinco * 0.05);
        printf("5 centimos: %d\n", cinco);
    }

    dois = montante / 0.02;
    if (dois > 0)
    {
        montante -= (dois * 0.02);
        printf("2 centimos: %d\n", dois);
    }

    um = montante / 0.01;
    if (um > 0)
    {
        montante -= (um * 0.01);
        printf("1 centimo: %d\n", um);
    }

    // printf("montante: %lf\n", montante);

    return 0;
}