#include <stdio.h>
#include <stdlib.h>

int main()
{
    float anos, a = 0, cidadeA, b = 0, cidadeB;
    printf("digite a populaçao da cidade A: ");
    scanf("%f", &cidadeA);
    printf("digite a populaçao da cidade B: ");
    scanf("%f", &cidadeB);
    do
    {
        a = cidadeA * 0.03;
        cidadeA += a;
        b = cidadeB * 0.015;
        cidadeB += b;
        anos++;
    } while (cidadeA <= cidadeB);
    printf("tamanho da populacao da cidade A :%.f", cidadeA);
    printf("\ntamanho da populacao da cidade B :%.f\n\n", cidadeB);
    printf("%.f anos", anos);

    return 0;
}