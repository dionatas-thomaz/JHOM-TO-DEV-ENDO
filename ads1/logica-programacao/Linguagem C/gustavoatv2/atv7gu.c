#include <stdio.h>
#include <string.h>

#define MAX_DADOS 2
#define MAX_LENGTH 100
#define DATE_LENGTH 12
#define ANOS_LENGTH 5

typedef struct
{
    char nomes[MAX_DADOS][MAX_LENGTH];
    char sangue[MAX_DADOS][MAX_LENGTH];
    char data[MAX_DADOS][DATE_LENGTH];
    char ano[MAX_DADOS][ANOS_LENGTH];
} Dados;

int main()
{
    Dados dados;

    for (int i = 0; i < MAX_DADOS; i++)
    {
        printf("Digite o nome: ");
        fgets(dados.nomes[i], MAX_LENGTH, stdin);
        dados.nomes[i][strcspn(dados.nomes[i], "\n")] = '\0';

        printf("Digite o tipo sanguíneo: ");
        fgets(dados.sangue[i], MAX_LENGTH, stdin);
        dados.sangue[i][strcspn(dados.sangue[i], "\n")] = '\0';

        printf("Digite sua data de nascimento (00/00/0000): ");
        fgets(dados.data[i], DATE_LENGTH, stdin);
        dados.data[i][strcspn(dados.data[i], "\n")] = '\0';

        strncpy(dados.ano[i], &dados.data[i][6], 4);
        dados.ano[i][4] = '\0';
    }
    for (int i = 0; i < MAX_DADOS; i++)
    {
        int ano_nascimento = atoi(dados.ano[i]);
        if (2024 - ano_nascimento >= 18 || 2024 - ano_nascimento >= 55)
        {
            printf("\nDados da Pessoa %d:\n", i + 1);
            printf("Nome: %s\n", dados.nomes[i]);
            printf("Tipo sanguíneo: %s\n", dados.sangue[i]);
            printf("Data de nascimento: %s\n", dados.data[i]);
        }
    }

return 0;
}
