#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_DADOS 1
#define MAX_LENGTH 100
#define t12_LENGTH 12

typedef struct
{
    char nomes[MAX_DADOS][MAX_LENGTH];
    char telefone[MAX_DADOS][MAX_LENGTH];
    char cpf[MAX_DADOS][t12_LENGTH];
    char endereco[MAX_DADOS][MAX_LENGTH];
    char data[MAX_DADOS][t12_LENGTH];
    int quantidade_env[MAX_DADOS];
    float valor$[MAX_DADOS];

} Dados;

int main()
{
    Dados dados;
    for (size_t i = 0; i < MAX_DADOS; i++)
    {
        printf("digite  seu Nome: ");
        scanf("%s", &dados.nomes[i]);
        setbuf(stdin, NULL);
        printf("digite seu telefone: ");
        scanf("%s", &dados.nomes[i]);
        setbuf(stdin, NULL);
        printf("digite o CPF: ");
        scanf("%s", &dados.cpf[i]);
        setbuf(stdin, NULL);
        printf("digite seu endereco: ");
        scanf("%d", &dados.endereco);
        setbuf(stdin, NULL);
        printf("digite a data: ");
        scanf("%d", &dados.data[i]);
        setbuf(stdin, NULL);
        printf("quantidade de envio: ");
        scanf("%d", &dados.quantidade_env[i]);
        setbuf(stdin, NULL);
        printf("digite o valor: ");
        scanf("%d", &dados.valor$[i]);
    }

    return 0;
}
