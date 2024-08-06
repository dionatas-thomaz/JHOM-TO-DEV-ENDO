#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX  2  // Quantidade máxima de nomes e tipos sanguineos 
#define TAM_MAX 50 // Tamanho máximo de cada caracteres

typedef struct
{
    char* nomes[MAX];
    char* tipo_sangue[MAX];
    int data_nascimento[MAX];
} dados;

int main() {
    
    dados dados;

    for (int i = 0; i < MAX; i++) {
        dados.nomes[i] = (char*)malloc(TAM_MAX  * sizeof(char));
        dados.tipo_sangue[i] = (char*)malloc(TAM_MAX  * sizeof(char));
        dados.data_nascimento[i] = (int)malloc(sizeof(int));
        if (dados.nomes[i] == NULL) {
            fprintf(stderr, "Erro de alocação de memória\n");
            return 1;
        }
    }

    for (int i = 0; i < MAX; i++) {
        printf("Digite o nome %d: ", i + 1);
        if (fgets(dados.nomes[i], TAM_MAX, stdin) != NULL) {
            
            dados.nomes[i][strcspn(dados.nomes[i], "\n")] = '\0';
        }
    }
    printf("\nNomes digitados:\n");
    for (int i = 0; i < MAX; i++) {
        printf("Nome %d: %s\n", i + 1, dados.nomes[i]);
    }
    
   // for (int i = 0; i < MAX_NOMES; i++) {
   //     free(nomes[i]);
   // }



    return 0;
}