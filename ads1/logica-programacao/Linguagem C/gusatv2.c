
#include <stdio.h>
#include <time.h>
#define TAM 30

int main()

{
    int vet[TAM];
    int maior = 0,posi=0;

    srand(time(NULL));

    for (int i = 0; i <= TAM; i++)
    {

        vet[i] = rand() % 100;

        printf("vetor[%d] : %d\n", i, vet[i]);
    }

    maior = vet[0];
    for (int i = 0; i <= TAM; i++)
    {
        if (maior < vet[i])
        {
            maior = vet[i];
            posi=i;
        }
    }
    printf("o maior num:%d\n e sua posiçao : %d", maior,posi);
    return 0;
}