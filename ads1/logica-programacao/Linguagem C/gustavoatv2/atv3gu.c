#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define TAM2 3

int main()
{
    int vet1[TAM], vet2[TAM2], x = 0, y = 0;

    srand(time(NULL));

    for (int i = 0; i < TAM; i++)
    {
        vet1[i] = rand() % 10;
        if (i < TAM2)
        {
            vet2[i] = rand() % 10;
        }

        if (vet1[i] % 2 == 0)
        {
            y++;
        }
    }

    int vetpar[y];

    for (int i = 0; i < y; i++)
    {
        vetpar[i] = 0;
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

    for (int i = 0; i < y; i++)
    {
        printf("valor vet[%d] = %d\n", i, vetpar[i]);
    }

    return 0;
}
