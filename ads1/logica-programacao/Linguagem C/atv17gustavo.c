#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
float n,s,res=0;
printf("digite a quantidade de termos :");
scanf("%f",&n);
printf("digite o valor de s :");
scanf("%f",&s);
for (size_t i = 2; i < n; i++)
{
    res+=(s/pow(i,i));
}
res+=s;
res+= 1/pow(n,n);
n-=1;
res+=1/pow(n,n);
printf("resultado de S:%f",res);

return 0;
}