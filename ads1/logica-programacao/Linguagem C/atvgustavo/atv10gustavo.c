#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fatorial(float num)
{
    float result = 1;
    for (size_t i = 1; i <= num; i++)
    {
        result*= i;
    }
    return result;
}
int main()
{
    float lup = 0, n, DOIDO = 0;
    printf("digite o valor de N .-. :");
    scanf("%f", &n);
   // DOIDO += fatorial(n);
    for (size_t i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        
            DOIDO -= fatorial(n -lup) / pow(i, i);
        
        else
        
            DOIDO += fatorial(n - lup) / pow(i, i);
        
        lup++;
    }
    printf("resultado de DOIDO - : %.2f",DOIDO);
   
    return 0;
}