#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, num1, num2, mdc = 1;

    printf("digite um numero: ");
    scanf("%d", &num1);

    printf("digite um numero: ");
    scanf("%d", &num2);
    do
    {
        for (i = 2; i < 100; i++)
        {
            while (num1 % i == 0 || num2 % i == 0)
            {
                printf("numero q vai dividir: %d\n", i);
                if (num1 % i == 0 && num2 % i == 0)
                {
                    mdc *= i;
                }
                if (num1 % i == 0)
                {
                    num1 /= i;
                    printf("result1: %d\n", num1);
                }
                if (num2 % i == 0)
                {
                    num2 /= i;
                    printf("result2: %d\n", num2);
                }
            }
        }
        printf("mdc: %d", mdc);
    } while (num1 != 1 && num2 != 1);
    return 0;
}