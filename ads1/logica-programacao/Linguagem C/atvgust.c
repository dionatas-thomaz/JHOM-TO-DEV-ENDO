#include <stdio.h>

int main (){

int num=0;

printf("digite o numero : ");
scanf("%d",&num);

for (size_t i = 0; i < num; i++)
{
    num*=i;
    printf("valor fat: %d\n",num);
}



    return 0;
}