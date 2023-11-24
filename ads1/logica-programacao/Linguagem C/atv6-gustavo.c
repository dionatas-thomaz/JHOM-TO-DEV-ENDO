#include <stdio.h>
#include <stdlib.h>

float valorapagar(float valor, float *desc)
{
    char op;
    printf("escolha a forma de pagamento:\n[1]A vista em dinheiro ou cheque com 10%% de desconto\n[2]A vista no cartao de debito com 7,5%% de desconto\n[3]A vista no cartao de credito com 5%% de desconto \n[4]dividir em duas vezes sem juros\n[5]Em quatro vezes com juros de 9,5%%\n\n");
    scanf("%s", &op);

    switch (op)
    {
    case '1':
        *desc = valor * 0.1;
        valor -= *desc;
        break;
    case '2':
        *desc = valor * 0.075;
        valor -= *desc;
        break;
    case '3':
        *desc = valor * 0.05;
        valor -= *desc;
        break;
    case '4':
        valor = valor / 2;
        printf("em 2x sem juros de:");
        break;
    case '5':
        *desc = valor * 0.095;
       valor = (valor+ *desc);
    
        break;
    default:
        printf("opcao invalida");
        break;
    }

    return valor;
}

int main()
{

    float valor, desc = 0;

    printf("valor a da compra: ");
    scanf("%f", &valor);

    valor = valorapagar(valor, &desc);

    printf("%.2f o valor a ser pago  ", valor);
    printf("\nobteve um desconto ou um acrescimo de : %.2f\n", desc);

    return 0;
}