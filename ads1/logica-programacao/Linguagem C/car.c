#include <stdio.h>

int main()
{

    int a, vet[10];

    printf("Digite um numero:");
    scanf("%d", &a);

    for (size_t i = 0; i <10; i++)
    {
        vet[i]=i+1;
         
        printf("%d\n", a * vet[i]);
    }

    return 0;
}