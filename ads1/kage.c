#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=0, a, vet[2];

    for (i = 0; i < 3; i++)
    {
        printf("digite um numero: ");
        scanf("%d", &a);

        vet[i] = a / 2;
         
    }
   printf("quantidade que foram usadas as tec:\n%d\n%d\n%d\n", vet[0],vet[1],vet[2]);

    return 0;
}