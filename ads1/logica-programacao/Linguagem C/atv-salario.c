#include <stdio.h>
#include <stdlib.h>

int main(){

float salario_min , hrs_trab,bruto,porc, salario_a_recb;

printf("digite o salario minino:");
scanf("%f", &salario_min);

printf("digite a s horas trabalhadas:");
scanf ("%f", &hrs_trab);

bruto= (salario_min/2)*hrs_trab;
porc= bruto*0.03;

printf("o salario total sera: %.1f",salario_a_recb= bruto-porc );
return 0;
}