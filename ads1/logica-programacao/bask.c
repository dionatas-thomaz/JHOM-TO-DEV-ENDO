#include <stdio.h>
#include <stdlib.h>
int main()
{

    float a, b, c;

    printf("digite A:");
    scanf("%f", &a);
    printf("digite B:");
    scanf("%f", &b);
    printf("digite C:");
    scanf("%f", &c);

    float delta = pow(b, 2) - (4 * a * c);
    printf(" o valor de delta e:%.f\n", delta);

    float soma = (-b + sqrt(delta)) / (2 * a);

    printf("resultado 1 e :%.f\n", soma);

    float subtracao = (-b - sqrt(delta)) / (2 * a);

    printf("resultado 2 e :%.f\n", subtracao);

    return 0;
}