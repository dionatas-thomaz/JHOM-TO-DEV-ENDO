#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

int cat1,cat2,hipo=0;

printf("digite o cateto adjacente:");
scanf("%d",&cat1);

printf("digite o cateto oposto:");
scanf("%d",&cat2);

hipo=sqrt(pow(cat1,2)+(pow(cat2,2)));

printf("a hipotenusa e: %d",hipo);

    return 0;
}