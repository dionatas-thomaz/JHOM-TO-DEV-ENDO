#include <stdio.h>
#include <stdlib.h>

int main()
{
    float idade, peso, dosagem,ml,gotas;

    printf("digite sua idade: ");
    scanf("%f", &idade);
    printf("digite sua peso: ");
    scanf("%f", &peso);

    if (idade >= 12 && peso >= 60)
        dosagem = 1000;
    else if (idade >= 12 && peso < 60)
        dosagem = 875;
    else if (peso > 5 && peso <= 9)
        dosagem = 125;
    else if (peso > 9 && peso <= 16)
        dosagem = 250;
    else if (peso > 16 && peso <= 24)
        dosagem = 375;
    else if (peso > 24 && peso < 30)
        dosagem = 500;
    else 
        dosagem = 750;

        ml=dosagem/500;
        gotas= ml*20;

    printf("dosagem de %.f mg \n que coresponde a:%.2f ml\n sao %.f gostas",dosagem,ml,gotas);
    return 0;
}