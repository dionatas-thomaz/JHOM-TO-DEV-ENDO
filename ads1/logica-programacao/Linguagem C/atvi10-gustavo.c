#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
   float fatorial(float num)
{
    float result = 1;
    for (size_t i = 1; i <= num; i++)
    {
        result*= i;
    }
    return result;
}
float aux=0,n,DOIDO=0;
printf("digite o valor de N .-. :");
scanf("%f",&n);
//DOIDO+=n;
for (size_t i = 1; i <= n; i++)
{
   DOIDO+= (n-aux)/pow(i,i);
   aux++;
}
printf("resultado de doido: %.2f",DOIDO);
return 0;
}