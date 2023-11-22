#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
float n,s,res=0;
printf("digite a quantidade de termos :");
scanf("%f",&n);
printf("digite o valor de s :");
scanf("%f",&s);

for (size_t i = 1; i < n; i++)
{
    res+=(s/pow(i,i));
}
printf("resultado de S:%f",res);

return 0;
}