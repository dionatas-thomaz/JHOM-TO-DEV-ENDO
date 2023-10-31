#include <stdio.h>
#include <stdlib.h>

int main()
{

    float preco, aumento;

    printf("digite o valor:");
    scanf("%f", &preco);

    if (preco > 100.00)
    {
        aumento = preco * 0.15;
        preco += aumento;
    }
    else if (preco > 50.00)
    {
        aumento = preco * 0.1;
        preco += aumento;
    }
    else if (preco < 50.00)
    {
        aumento = preco * 0.05;
        preco += aumento;
    }
    printf("novo preco: %.2f\n", preco);
    if (preco < 80.00)
        printf("Barato");
    else if (preco > 80.00 && preco < 120.00)
        printf("Normal");
    else if (preco > 120.00 && preco < 200.00)
        printf("Caro");
    else if (preco > 200.00)
        printf("Muito Caro");

    return 0;
}