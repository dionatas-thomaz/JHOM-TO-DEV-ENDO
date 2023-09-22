/*8. Faça um algoritmo que calcule e mostre a área de um circulo.
Sabe-se que a área = π .r2 , considere π= 3.14 e r é o raio do circulo que deve ser informado
pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int a,r;
float pi=3.14;

printf("digite r:");
scanf("%d",&r);

a= pi*(r*r);

printf("raio do circulo e: %d",a);

    return 0;
}g