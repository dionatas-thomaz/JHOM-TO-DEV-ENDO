#include <stdio.h>
int main() {
    FILE *arquivo = fopen("exemplo.txt", "w");
    if (arquivo != NULL) {
        fprintf(arquivo, "Isso é um exemplo de fprintf.\n");
        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo.\n");
    }
    return 0;
}
