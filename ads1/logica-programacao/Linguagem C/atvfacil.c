#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   double pi = 3.14159, raio, area;

    printf("Digite o raio:\n"); 
    scanf("%lf",&raio); 

    area = pi * pow(raio,2);

    printf("A=%.4lf\n",area); 

    printf("fim de linha");
    
    return 0;
}
