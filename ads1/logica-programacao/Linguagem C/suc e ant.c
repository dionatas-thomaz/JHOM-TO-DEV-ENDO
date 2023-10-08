/*Escreva um algoritmo em fluxograma que leia um número inteiro e imprima o seu sucessor e o seu antecessor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, ant, suc;

    printf("digite um numero: ");
    scanf("%d", &a);

    ant = a - 1;
    suc = a + 1;

    printf("antecessor: %d\nsucessor: %d", ant, suc);

    return 0;
}