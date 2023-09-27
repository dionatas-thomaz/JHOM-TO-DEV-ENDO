#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a = 0, b = 0, sal, per, nov = 0;

    printf("digite o seu salario:");
    scanf("%f", &sal);
    printf("digite o percentual: ");
    scanf("%f", &per);

    a = per / 100;

    b = sal * a;

    nov = sal + b;

    printf("\nnovo salario:%.2f\n", nov);
    return 0;
}