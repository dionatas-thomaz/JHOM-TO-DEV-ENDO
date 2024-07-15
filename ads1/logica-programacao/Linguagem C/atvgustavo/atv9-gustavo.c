#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
float n,s=0;
printf("digite a quantidade de termos :");
scanf("%f",&n);
for (size_t i = 1; i < n; i++)
{
    s+=(1/pow(i,i));
}
printf("resultado de S:%f",s);
return 0;
}