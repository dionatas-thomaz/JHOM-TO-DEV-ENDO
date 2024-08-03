
#include <stdio.h>
#include <time.h>
#define TAM 5
#define TAM2 2

int main()
{

    int vet1[TAM], vet2[TAM2], x = 0, y = 0;

    for (int i = 0; i < TAM2; i++)
    {
        vet2[i] = rand() % 10;
    }

    for (int i = 0; i < TAM; i++)
    {
        vet1[i] = rand() % 10

        if (vet1[i] % 2 == 0)
        {
            y++;
        }
    }

    int vetpar[y];

    for (int i = 0; i < count; i++)
    {

        if (vet1[i] % 2 == 0)
        {
            x++;
            for (int j = 0; i < TAM2; i++)
            {
                vetpar[x] += vet1[i] + vet2[j];
            }
        }
    }

    for (int i = 0; i < y; i++)
    {
        printf("o valor do vet[%d] = %d\n", i, vetpar[i]);
    }

    return 0;
}