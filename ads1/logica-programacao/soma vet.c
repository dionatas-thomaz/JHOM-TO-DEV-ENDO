#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vet[3], a = 0;

    for (size_t i = 0; i < 4; i++)
    {
        printf("digite um numero:");
        scanf("%d", &vet[i]);
        a =  vet[i]+a ;
    }
    printf("a soma deu: %d", a);

    return 0;
}