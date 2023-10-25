#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vet[4],i=0, a = 0;

    for ( i = 0; i < 4; i++)
    {
        printf("digite um numero:");
        scanf("%d", &vet[i]);
           a+= vet[i];
          
    }
     printf("\na soma deu: %d\n", a);

    return 0;
}