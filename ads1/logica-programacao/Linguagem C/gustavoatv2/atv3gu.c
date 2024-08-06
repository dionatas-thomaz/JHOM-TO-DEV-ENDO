#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define TAM2 3

int main()
{
    int vet1[TAM], vet2[TAM2], x = 0, y = 0, lup = 0, par = 0, imp = 0;

    srand(time(NULL));

    for (int i = 0; i < TAM; i++)
    {
        vet1[i] = rand() % 10;
        printf("numeros gerados no primeiro vetor: %d \n", vet1[i]);
        if (i < TAM2)
        {
            vet2[i] = rand() % 10;
            printf("numeros gerados no segundo vet vetor: %d\n", vet2[i]);
        }

        if (vet1[i] % 2 == 0)
        {
            par++;
        }
        if (vet1[i] % 2 != 0)
        {
            imp++;
        }
    }
    
    int vetpar[par];
    int vetimp[imp];

    for (int i = 0; i < par; i++)
    {
        vetpar[i] = 0;
    }
    for (int i = 0; i < imp; i++)
    {
        vetimp[i] = 0;
    }

    for (int i = 0; i < TAM; i++)
    {
        if (vet1[i] % 2 == 0)
        {
            for (int j = 0; j < TAM2; j++)
            {
                vetpar[x] += vet1[i] + vet2[j];
            }
            x++;
        }
    }

    for (size_t i = 0; i < TAM; i++)
    {
        if (vet1[i] % 2 != 0)
        {
            for (size_t j = 0; j < TAM2; j++)
            {
                if (vet1[i] % vet2[j] == 0)
                {
                    y++;
                    vetimp[lup] += y;
                }
            }
            y = 0;
            lup++;
        }
    }

    for (int i = 0; i < par; i++)
    {
        printf("valor vetparr[%d] = %d\n", i, vetpar[i]);
    }
    for (int i = 0; i < imp; i++)
    {
        printf("valor vetimpar[%d] = %d\n", i, vetimp[i]);
    }

    return 0;
}
