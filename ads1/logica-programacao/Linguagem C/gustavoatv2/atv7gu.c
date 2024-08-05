#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOMES 3    // Quantidade máxima de nomes
#define TAM_MAX_NOME 50 // Tamanho máximo de cada nome

int main() {
    char* nomes[MAX_NOMES];

    for (int i = 0; i < MAX_NOMES; i++) {
        nomes[i] = (char*)malloc(TAM_MAX_NOME * sizeof(char));
        if (nomes[i] == NULL) {
            fprintf(stderr, "Erro de alocação de memória\n");
            return 1;
        }
    }

    for (int i = 0; i < MAX_NOMES; i++) {
        printf("Digite o nome %d: ", i + 1);
        if (fgets(nomes[i], TAM_MAX_NOME, stdin) != NULL) {
            
            nomes[i][strcspn(nomes[i], "\n")] = '\0';
        }
    }
    printf("\nNomes digitados:\n");
    for (int i = 0; i < MAX_NOMES; i++) {
        printf("Nome %d: %s\n", i + 1, nomes[i]);
    }
    
    for (int i = 0; i < MAX_NOMES; i++) {
        free(nomes[i]);
    }

    return 0;
}