#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lancaDado()
{
    return (1 + rand() % 6);
}

int jogodados(int lancamentos)
{
    int pontos = 0;
    int mesa[lancamentos + 1];
    mesa[0] = 0;

        for (int i = 1; i <= lancamentos; i++)
        {
            mesa[i] = lancaDado();
            pontos += mesa[i];
            // printf(" %d ", mesa[i]); // retirado para mostrar as medias
            if (mesa[i] == mesa[i - 1])
            {
                pontos *= -1;
                break;
            }
        }
        // printf("  Pontos: %d\n", pontos); // retirado para mostrar as medias
    
    return pontos;
}

int main()
{
    int lancamentos = 0;
    srand(time(NULL));

    printf("Lancamentos: ");
    scanf("%d", &lancamentos);


    jogodados(lancamentos);


    // para calcular as medias de pontos por lancamentos
    int total;
    
    printf("\nValores medios dos pontos:\n");
    for(int i = 1; i <= 9; i++)
    {
        total = 0;
        for(int j = 0; j< 500; j++)
        {
            total += jogodados(i);
        }
        printf("Com %d lancamento(s): %.2f\n", i, total/500.0);
    }

    return 0;
}