#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, par = 0, cont1 = 0, impar = 0, cont2 = 0;

    for (size_t i = 0; i < 10; i++)
    {
        printf("digite 10 numeros inteiros:\n ");
        scanf("%d", &a);

        if (a % 2 == 0)
        {
            par += a;
            cont1++;
        }
         if (a % 2 == 1)
        {
            impar += a;
            cont2++;
        }
    }

    printf("quantidade de numeros pares:%d\n", cont1);
    printf("soma: %d\n\n", par);
    printf("quantidade de numeros impares:%d\n", cont2);
    printf("media dos numeros impares : %d\n", impar / cont2);
    return 0;
}