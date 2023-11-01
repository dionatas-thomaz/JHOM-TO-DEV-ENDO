#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, num1, num2, mmc = 1;

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
                mmc *= i;
            }
        }
        printf("vetor: %d", mmc);
    } while (num1 != 1 && num2 != 1);
    return 0;
}