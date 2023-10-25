
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    int cont100 = 0, cont50 = 0, cont20 = 0, cont10 = 0, cont5 = 0, cont2 = 0, cont1 = 0;
    int conti5 = 0, conti25 = 0, conti10 = 0, conti05 = 0, conti01 = 0;

    printf("Digite um numero: ");
    scanf("%f", &a);

    if (a >= 100)
    {
        cont100 = a / 100;
        a -= cont100 * 100;
    }
    if (a >= 50)
    {
        cont50 = a / 50;
        a -= cont50 * 50;
    }
    if (a >= 20)
    {
        cont20 = a / 20;
        a -= cont20 * 20;
    }
    if (a >= 10)
    {
        cont10 = a / 10;
        a -= cont10 * 10;
    }
    if (a >= 5)
    {
        cont5 = a / 5;
        a -= cont5 * 5;
    }
    if (a >= 2)
    {
        cont2 = a / 2;
        a -= cont2 * 2;
    }
    if (a >= 1)
    {
        cont1 = a;
    }
    if (a >= 0.50)
    {
        conti5 = a / 0.50;
        a -= conti5 * 0.50;
    }
    if (a >= 0.25)
    {
        conti25 = a / 0.25;
        a -= conti25 * 0.25;
    }
    if (a >= 0.10)
    {
        conti10 = a / 0.10;
        a -= conti10 * 0.10;
    }
    if (a >= 0.05)
    {
        conti05 = a / 0.05;
        a -= conti05 * 0.05;
    }
    if (a >= 0.01)
    {
        conti01 = a / 0.01;
       /* conti01++;*/
    }

    printf("Cont100: %d\n", cont100);
    printf("Cont50: %d\n", cont50);
    printf("Cont20: %d\n", cont20);
    printf("Cont10: %d\n", cont10);
    printf("Cont5: %d\n", cont5);
    printf("Cont2: %d\n", cont2);
    printf("Cont1: %d\n", cont1);
    printf("Cont0.50: %d\n", conti5);
    printf("Cont0.25: %d\n", conti25);
    printf("Cont0.10: %d\n", conti10);
    printf("Cont0.05: %d\n", conti05);
    printf("Cont0.01: %d\n", conti01);

    return 0;
}
