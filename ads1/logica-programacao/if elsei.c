#include <stdio.h>
int main()
{

    int a;

    printf("digite a nota:");
    scanf("%d", &a);

    if (a >= 7)
        printf("aprovado");
    else if (a>=4)                        
        printf("recuperacao");
    else
        printf("reprovado");

    return 0;
}