#include <stdio.h>
#include <stdlib.h>

int main()
{

   float a;
    char op;

    printf("digite o valor em celsiuS ou fahrenheit: ");
    scanf("%f", &a);

    printf("escolha a op: [1] para converter de celsiuS para fahrenheit:\n");
    printf("escolha a op: [2] para converter de fahrenheit para celsiuS\n :");
    scanf("%s", &op);
    switch (op)
    {
    case '1':
        printf("result: %.2f", (((a / 5)*9)+32));
        break;

          case '2':
        printf("result: %.2f", ((a-32)/9)*5);
        break;

    default:
        printf("erro, tente novamente");
        break;
    }

    return 0;
}