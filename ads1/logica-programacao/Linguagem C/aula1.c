#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50], comida[50], livro[50];
    int idade;
    float nota;

    printf("Digite o nome do aluno:\n");
    fgets(nome, sizeof(nome), stdin);

    printf("Nota do estudante:\n");
    scanf("%f", &nota);
    getchar(); 

    printf("Qual o seu pedido:\n");
    fgets(comida, sizeof(comida), stdin);

    printf("Empréstimo do livro:\n");
    fgets(livro, sizeof(livro), stdin);

    printf("Qual a sua idade:\n");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }

    printf("Aluno %s, e sua nota é: %.2f\n", nome, nota);
    printf("Pedido de comida: %s\n", comida);
    printf("Livro emprestado: %s\n", livro);
    printf("Dados básicos:\nNome: %sIdade: %d\n", nome, idade);

    return 0;
}
