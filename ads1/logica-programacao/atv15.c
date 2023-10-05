#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, PROD;

    printf("digite um numero: ");
    scanf("%d", &a);

    printf("digite um numero: ");
    scanf("%d", &b);

    PROD = a * b;

    printf("resultado: %d", PROD);

    return;
}