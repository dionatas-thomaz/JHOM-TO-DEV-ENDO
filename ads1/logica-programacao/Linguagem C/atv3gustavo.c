#include <stdio.h>
#include <stdlib.h>

int main (){

float ht,hx,salaribrut,salrec;

printf("horas tabalhadas: ");
scanf("%f",&ht);
printf("horas extra: ");
scanf("%f",&hx);

salaribrut= (((1320*0.125)*ht)+(1320*0.25)*hx);
salrec= (salaribrut-(salaribrut/8.5));
printf("salario a receber: %.2f",salrec);
    return 0;
}
