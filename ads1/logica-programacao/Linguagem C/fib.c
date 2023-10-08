#include <stdio.h>

int main (){

int i, n, t1=0, t2=1, proxtermo;

printf("informe a quantidade de termos: ");
scanf ("%d", &n);

printf("\n serie de fibo \n");

for ( i = 0; i < n; i++)
{
    
    proxtermo = t1 + t2 ;
   t1 = t2 ;
    t2 = proxtermo;
    printf("%d",proxtermo);
}

    return  0;
}