#include <stdio.h>
#include <stdlib.h>

int main()
{
    float anos, a = 0, cidadeA=80.000, b = 0, cidadeB=200.000;
  
    do
    {
        a = cidadeA * 0.03;
        cidadeA += a;
        b = cidadeB * 0.015;
        cidadeB += b;
        anos++;
    } while (cidadeA <= cidadeB);
  
    printf("%.f anos", anos);

    return 0;
}