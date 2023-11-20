#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fatorial(float num)
{
    float result = 1;
    for (size_t i = 1; i < num; i++)
    {
        result*= i;
    }
    return result;
}
float menos(float n, float CRAZY)
{
    float menos = 0;
    CRAZY -= (fatorial(1) / pow(n, n));
    n -= 1;
    CRAZY -=( fatorial(2) / pow(n, n));
    menos += CRAZY;
    return menos;
}
float mais(float n, float CRAZY)
{
    float mais = 0;
    CRAZY += (fatorial(1) / pow(n, n));
    n -= 1;
    CRAZY += (fatorial(2) / pow(n, n));
    mais += CRAZY;
    return mais;
}
int main()
{
    float lup = 1, n, CRAZY = 0;
    printf("digite o valor de N .-. :");
    scanf("%f", &n);
    CRAZY += fatorial(n);
    for (size_t i = 2; i < n; i++)
    {
        if (i % 2 == 0)
        
            CRAZY -= fatorial(n -lup) / pow(i, i);
        
        else
        
            CRAZY += fatorial(n - lup) / pow(i, i);
        
        lup++;
    }
    printf("resultado de CRAZY - : %.2f",menos(n,CRAZY));
    printf("resultado de CRAZY + : %.2f", mais(n,CRAZY));
    return 0;
}