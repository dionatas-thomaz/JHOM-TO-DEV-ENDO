#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
float n,DOIDO=0;
printf("digite o valor de N .-. :");
scanf("%f",&n);
;
for (size_t i = 1; i < n; i++)
{
   DOIDO+= (n-1)/pow(i,i);
}
printf("resultado de doido: %.2f",DOIDO);
return 0;
}