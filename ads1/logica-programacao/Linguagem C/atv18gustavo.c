#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
float n,DOIDO=0;
printf("digite o valor de N .-. :");
scanf("%f",&n);
for (size_t i = 2; i < n; i++)
{
   DOIDO+= (n-1)/pow(i,i);
}
DOIDO+=n;
DOIDO+= 1/pow(n,n);
n-=1;
DOIDO+=2/pow(n,n);
printf("resultado de doido: %.2f",DOIDO);
return 0;
}