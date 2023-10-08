#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;

    printf("digite o numero: ");
    scanf("%d", &a);

    for (size_t i = 100; i > 0; i--)
        if (i % a == 0)
            printf("numero div: %d\n", i);

    return 0;
}