#include <stdio.h>
#include <stdlib.h>

int main()
{

    float idade, peso, gotas, ml;

    printf("digite sua idade: ");
    scanf("%f", &idade);
    printf("digite sua peso: ");
    scanf("%f", &peso);

    if (idade >= 12 && peso >= 60)
        ml = 1000;
    else if (idade >= 12 && peso < 60)
        ml = 875;
    else if (peso > 5 && peso <= 9)
        ml = 125;
    else if (peso > 9 && peso <= 16)
        ml = 250;
    else if (peso > 16 && peso <= 24)
        ml = 375;
    else if (peso > 24 && peso < 30)
        ml = 500;
    else 
        ml = 750;

    printf("dosagem de %.f mg que coresponde a:%.f gotas",ml, gotas = ml * 20);
    return 0;
}