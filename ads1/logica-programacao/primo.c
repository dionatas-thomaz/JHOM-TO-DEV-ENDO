#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int num, cont = 0;
    printf("digite um numero: ");
    scanf("%d", &num);

    for (unsigned int i = 1; i <= num; i++)
        if (num % i == 0)
            cont++;

    if (cont == 2)
        printf("numero primo");

    else
        printf("esse numero nao e primo");

    return 0;
}
