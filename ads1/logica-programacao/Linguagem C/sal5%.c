/*Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, sabendo-se que o
funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a, sal, nov;

    printf("digite o seu salario:");
    scanf("%f", &sal);

    a = sal * 0.02;

    nov = sal - a;
    printf("\nnovo salario:%.2f\n", nov);
    return 0;
}