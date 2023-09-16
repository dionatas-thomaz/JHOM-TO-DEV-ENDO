#include <stdio.h>

int main()
{
    float num1, num2;
    char op;

    do
    {
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);

        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        printf("Escolha a operacao: '+'  '-'  '*'  '/' \n: ");
        scanf(" %c", &op); 
        switch (op)
        {
        case '+':
            printf("A soma e: %.f\n", num1 + num2);
            break;

        case '-':
            printf("A subtracao  e: %.f\n", num1 - num2);
            break;

        case '*':
            printf("A multiplicacao : %.f\n", num1 * num2);
            break;

        case '/':
            if (num2 == 0)
            {
                printf("Digite um valor valido\n");
            }
            else
            {
                printf("A divisao e: %.2f\n", num1 / num2);
            }
            break;

        default:
            printf("Operacao invalida\n");
        }

        printf("Deseja realizar outra operacao? (s/n): ");
        scanf(" %c", &op);
    } while (op == 's' || op == 'S');

    printf("\nFim\n");

    return 0;
}