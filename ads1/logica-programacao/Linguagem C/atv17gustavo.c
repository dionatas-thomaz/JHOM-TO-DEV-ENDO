#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
float s,res;

printf("digite o valor :");
scanf("%f",&s);
for (size_t i = 2; i < s; i++)
{
    res=s+(s/pow(i,i));
}
printf("resultado:%f",s);

return 0;
}