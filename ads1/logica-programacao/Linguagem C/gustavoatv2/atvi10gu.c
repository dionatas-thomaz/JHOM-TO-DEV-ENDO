#include <stdio.h>
#include  <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_DADOS 1
#define MAX_LENGTH 100
#define t12_LENGTH 12

typedef struct
{
    char nomes[MAX_DADOS][MAX_LENGTH];
    char telefone[MAX_DADOS][MAX_LENGTH];
    char cpf[MAX_DADOS][CPF_LENGTH];
    char endereco[MAX_DADOS][MAX_LENGTH];
    char data[MAX_DADOS][t12_LENGTH];
    int quantidade_env[MAX_DADOS];
    float valor$[MAX_DADOS];

} Dados;

int main()
{
    Dados dados;

return 0;
}
