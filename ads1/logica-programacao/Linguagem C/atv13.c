#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a, b = 0, c = 0;
    do
    {

        printf("\ndigite algum numero:\n");
        scanf("%f", &a);
        if (a <= 0)
        {
            printf("valor invalido :/");
            break;
        }

            b += a;
             c++;

    } while (a != 0);

    printf("\na media e:\n %.2f", b / c);
    printf("fim :)");
    return 0;
}