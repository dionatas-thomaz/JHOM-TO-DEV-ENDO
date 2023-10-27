#include <stdio.h>

int main()
{

    float vet[5], nota=0;

    for (size_t i = 0; i < 5; i++)
    {
        printf("digite sua nota: ");
        scanf("%f", &vet[i]);

        nota += vet[i];
    }
    nota/= 5;
    printf("sua nota:%.2f",nota);

    return 0;
}