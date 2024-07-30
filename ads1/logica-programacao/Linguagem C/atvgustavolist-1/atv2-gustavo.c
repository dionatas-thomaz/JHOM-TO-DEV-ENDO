
#include <stdio.h>
#include <stdlib.h>

int main(){
    double a;
    int cont100 = 0, cont50 = 0, cont20 = 0, cont10 = 0, cont5 = 0, cont2 = 0, cont1 = 0;
    int conti5 = 0, conti25 = 0, conti10 = 0, conti05 = 0, conti01 = 0;

    printf("Digite um numero: ");
    scanf("%lf", &a);

    if (a >= 100){
        cont100 = a / 100.0;
        a -= cont100 * 100.0;
             printf("nota de 100 reais: %d\n", cont100);
    }
    if (a >= 50){
        cont50 = a / 50.0;
        a -= cont50 * 50.0;
             printf("notas de 50 reais: %d\n", cont50);
    }
    if (a >= 20){
        cont20 = a / 20.0;
        a -= cont20 * 20.0;
             printf("nota de 20 reais: %d\n", cont20);
    }
    if (a >= 10) {
        cont10 = a / 10.0;
        a -= cont10 * 10.0;
             printf("nota de 10 reais: %d\n", cont10);
    }
    if (a >= 5) {
        cont5 = a / 5.0;
        a -= cont5 * 5.0;
             printf("nota de 5 reais: %d\n", cont5);
    }
    if (a >= 2) {
        cont2 = a / 2.0;
        a -= cont2 * 2.0;
             printf("nota de 2 reais: %d\n", cont2);
    }
    if (a >= 1){
        cont1 = a;
        a-=cont1;
             printf("moeda de 1 real: %d\n", cont1);
    }
    if (a >= 0.50){
        conti5 = a / 0.50;
        a -= conti5 * 0.50;
             printf("moeda de 50 centavos: %d\n", conti5);
    }
    if (a >= 0.25){
        conti25 = a / 0.25;
        a -= conti25 * 0.25;
             printf("moeda de 25 centavos: %d\n", conti25);
    }
    if (a >= 0.10) {
        conti10 = a / 0.10;
        a -= conti10 * 0.10;
             printf("moeda de 10 centavos: %d\n", conti10);
    }
    if (a >= 0.05){
        conti05 = a / 0.05;
        a -= conti05 * 0.05;
             printf("moeda de 5 centavos: %d\n", conti05);
    }
    if (a >= 0.01){
        conti01 =(float)(a *100/1.0);
             printf("moeda de 01 centavo: %d\n", conti01);
    }
    return 0;
}