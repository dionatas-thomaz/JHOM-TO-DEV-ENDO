#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite a quantidade de termos : ");
    scanf("%d", &n);
    int vet[n];
    vet[0] = 0;
    vet[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        vet[i] = vet[i - 1] + vet[i - 2];
    }
    for (int i = 1; i <= n; i++)
    {
        printf(" %d ", vet[i]);
    }
    return 0;
}