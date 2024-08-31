#include <stdio.h>
#include <stdlib.h>

int main() {
    int identificacao;
    float valorImposto, multa;
    int mesesAtraso;
    float totalArrecadado = 0.0;

    while (1) {
        printf("Digite a identificacao do imovel (0 para encerrar): ");
        scanf("%d", &identificacao);

        if (identificacao == 0) {
            break;
        }

        printf("Digite o valor do imposto: ");
        scanf("%f", &valorImposto);

        printf("Digite o numero de meses em atraso: ");
        scanf("%d", &mesesAtraso);

        multa = valorImposto * 0.02 * mesesAtraso;

        printf("Identificacao do imovel: %d\n", identificacao);
        printf("Valor do imposto: R$ %.2f\n", valorImposto);
        printf("Numero de meses em atraso: %d\n", mesesAtraso);
        printf("Multa a ser paga: R$ %.2f\n\n", multa);

        totalArrecadado += multa;
    }

    printf("Total a ser arrecadado pelo municipio: R$ %.2f\n", totalArrecadado);

    return 0;
}
