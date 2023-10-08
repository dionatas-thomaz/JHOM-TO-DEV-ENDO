#include <stdio.h>

int main()
{

    float a, b, c;
    printf("digite o seu salario:");
    scanf("%f", &a);
    b = a / (22 * 8);
    c = a / b;

    printf("salario por hora: %f\n", b);
    printf(" horas trab: %f\n", c);

    if (a == 2000)
    {
        printf("salario convencional");
    }
    else if
        (a > 2000)
        {
            printf("salario +hora extra");
        }

    return 0;
}