
#include <stdio.h>
#include <stdlib.h> 
#define TAM 4
int main()
{

    int i, menor = 0, vetor[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("INSIRA O DADO: ");
        scanf("%d", &vetor[i]);
        menor = vetor[0];
        if (menor < vetor[i])
        {
            menor = vetor[i];
        }
    }
    printf("\ndado do menor: %d\n", menor);
    return 0;
}