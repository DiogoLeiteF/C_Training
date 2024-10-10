#include <stdio.h>
#include <unistd.h>

// Faça um programa que receba um montante em euros (com cêntimos), e que determina o
// menor número de moedas de cada tipo necessário para perfazer esse montante. Pode utilizar
// moedas de euros de todos os valores disponíveis (2€, 1€, ...).

int main()
{
    float montante;
    int count;

    printf("Introduza um montante em euros, podendo ter centimos: ");
    scanf("%f", &montante);
    // arredondar para o centimo mais proximo
    montante += 0.005;

    count = (int) (montante / 2.);
    montante -= count *2;
    if(count > 0)
        printf("2 euros: %d\n", count);

    count = (int) (montante / 1.);
    montante -= count *1;
    if(count > 0)
        printf("1 euro: %d\n", count);
    
    count = (int) (montante / 0.50);
    montante -= count *0.50;
    if(count > 0)
        printf("50 cent: %d\n", count);
    
    count = (int) (montante / 0.20);
    montante -= count *0.20;
    if(count > 0)
        printf("20 cent: %d\n", count);
    
    count = (int) (montante / 0.10);
    montante -= count *0.10;
    if(count > 0)
        printf("10 cent: %d\n", count);
    
    count = (int) (montante / 0.05);
    montante -= count *0.05;
    if(count > 0)
        printf("5 cent: %d\n", count);
    
    count = (int) (montante / 0.02);
    montante -= count *0.02;
    if(count > 0)
        printf("2 cent: %d\n", count);
    
    count = (int) (montante / 0.01);
    montante -= count *0.01;
    if(count > 0)
        printf("1 cent: %d\n", count);
    
    

    /****************************************
     my solution 
     ***************************************/

    // float montante;
    int euros2 = 0;
    int euros1 = 0;
    int c50 = 0;
    int c20 = 0;
    int c10 = 0;
    int c5 = 0;
    int c2 = 0;
    int c1 = 0;


    while (montante > 0.00)
    {
        if (montante - 2 >= 0)
        {
            montante -= 2;
            euros2++;
        }
        else if (montante - 1 >= 0)
        {
            montante -= 1;
            euros1++;
        }
        else if (montante - 0.50 >= 0)
        {
            montante -= 0.50;
            c50++;
        }
        else if (montante - 0.20 >= 0)
        {
            montante -= 0.20;
            c20++;
        }
        else if (montante - 0.10 >= 0)
        {
            montante -= 0.10;
            c10++;
        }
        else if (montante - 0.05 >= 0)
        {
            montante -= 0.05;
            c5++;
        }
        else if (montante - 0.02 >= 0.00)
        {
            montante -= 0.02;
            c2++;
        }
        else if(montante -0.01 >= 0.00)
        {
            montante -= 0.01;
            c1++;
        }
        else
            break;
        // test loop:
        // printf("%f\n", montante);
        // getchar();
    }


        if (euros2)
            printf("2 euros: %d\n", euros2);
        if (euros1)
            printf("1 euro: %d\n", euros1);
        if (c50)
            printf("50 cent: %d\n", c50);
        if (c20)
            printf("20 cent: %d\n", c20);
        if (c10)
            printf("10 cent: %d\n", c10);
        if (c5)
            printf("5 cent: %d\n", c5);
        if (c2)
            printf("2 cent: %d\n", c2);
        if (c1)
            printf("1 cent: %d\n", c1);

    return 0;
}