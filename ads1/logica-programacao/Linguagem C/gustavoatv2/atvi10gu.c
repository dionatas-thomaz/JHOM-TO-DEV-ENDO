#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COOPERADOS 2
#define MAX_LENGTH 100

typedef struct {
    char nome[MAX_LENGTH];
    char telefone[MAX_LENGTH];
    char cpf[MAX_LENGTH];
    char endereco[MAX_LENGTH];
    char data[MAX_LENGTH]; 
    int quantidade_env;
    float valor_prod;
} Cooperado;

void ordenaPorQuantidade(Cooperado cooperados[], int n) {
    Cooperado temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (cooperados[i].quantidade_env < cooperados[j].quantidade_env) {
                temp = cooperados[i];
                cooperados[i] = cooperados[j];
                cooperados[j] = temp;
            }
        }
    }
}

float aplicaBeneficio(Cooperado *cooperado, int posicao) {
    float porcentagem = 20.0f - (posicao * 2.0f);
    return cooperado->valor_prod * cooperado->quantidade_env * (1 + porcentagem / 100);
}

int main() {
    Cooperado cooperados[MAX_COOPERADOS];
    int n = MAX_COOPERADOS;
    float totalDesembolso = 0.0f;

    for (int i = 0; i < n; i++) {
        printf("Digite seu nome: ");
        scanf(" %[^\n]s", cooperados[i].nome);
        setbuf(stdin, NULL);

        printf("Digite seu telefone: ");
        scanf(" %[^\n]s", cooperados[i].telefone);
        setbuf(stdin, NULL);

        printf("Digite o CPF: ");
        scanf(" %[^\n]s", cooperados[i].cpf);
        setbuf(stdin, NULL);

        printf("Digite seu endereco: ");
        scanf(" %[^\n]s", cooperados[i].endereco);
        setbuf(stdin, NULL);

        printf("Digite a data : ");
        scanf(" %[^\n]s", cooperados[i].data);
        setbuf(stdin, NULL);

        printf("Quantidade enviada à cooperativa: ");
        scanf("%d", &cooperados[i].quantidade_env);

        printf("Valor total em R$ da produção entregue: ");
        scanf("%f", &cooperados[i].valor_prod);
        setbuf(stdin, NULL);
    }

    ordenaPorQuantidade(cooperados, n);

    printf("\nCooperados beneficiados:\n");
    for (int i = 0; i < 10; i++) {
        float valorComBeneficio = aplicaBeneficio(&cooperados[i], i);
        printf("\nCooperado %d:\n", i + 1);
        printf("Nome: %s\n", cooperados[i].nome);
        printf("CPF: %s\n", cooperados[i].cpf);
        printf("Telefone: %s\n", cooperados[i].telefone);
        printf("Endereco: %s\n", cooperados[i].endereco);
        printf("Data de Associacao: %s\n", cooperados[i].data);
        printf("Quantidade Enviada: %d\n", cooperados[i].quantidade_env);
        printf("Valor da Producao com Beneficio: R$ %.2f\n", valorComBeneficio);
        totalDesembolso += valorComBeneficio;
    }

    printf("\nTotal a ser desembolsado pela cooperativa: R$ %.2f\n", totalDesembolso);

    return 0;
}
