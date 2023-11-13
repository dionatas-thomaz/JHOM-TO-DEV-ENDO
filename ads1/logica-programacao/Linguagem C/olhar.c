#include <stdio.h>

int main() {
    int idade, contador1 = 0, contador2 = 0, contador3 = 0, contador_ruivas_sem_olhos_azuis = 0;
    float peso, altura, soma_idades = 0;
    char cor_olhos, cor_cabelos;

    printf("Digite a idade (0 para encerrar): ");
    scanf("%d", &idade);

    while (idade != 0) {
        printf("Digite o peso: ");
        scanf("%f", &peso);

        printf("Digite a altura: ");
        scanf("%f", &altura);

        printf("Digite a cor dos olhos (a - azul, p - preto, v - verde, c - castanho): ");
        scanf(" %c", &cor_olhos);

        printf("Digite a cor dos cabelos (p - preto, c - castanho, l - louro, r - ruivo): ");
        scanf(" %c", &cor_cabelos);

        // Verifica a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg
        if (idade > 50 && peso < 60) {
            contador1++;
        }

        // Calcula a média das idades das pessoas com altura inferior a 1,50 m
        if (altura < 1.50) {
            soma_idades += idade;
            contador2++;
        }

        // Calcula a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas
        if (cor_olhos == 'a') {
            contador3++;
        }

        // Verifica a quantidade de pessoas ruivas e que não possuem olhos azuis
        if (cor_cabelos == 'r' && cor_olhos != 'a') {
            contador_ruivas_sem_olhos_azuis++;
        }

        printf("\nDigite a idade (0 para encerrar): ");
        scanf("%d", &idade);
    }

    if (contador1 > 0) {
        printf("\nQuantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg: %d\n", contador1);
    } else {
        printf("\nNenhuma pessoa atende aos critérios.\n");
    }

    if (contador2 > 0) {
        float media_idades = soma_idades / contador2;
        printf("Média das idades das pessoas com altura inferior a 1,50 m: %.2f\n", media_idades);
    } else {
        printf("Nenhuma pessoa atende aos critérios.\n");
    }

    if (contador3 > 0) {
        float porcentagem_olhos_azuis = (float)contador3 / (contador1 + contador2 + contador3) * 100;
        printf("Porcentagem de pessoas com olhos azuis: %.2f%%\n", porcentagem_olhos_azuis);
    } else {
        printf("Nenhuma pessoa tem olhos azuis.\n");
    }

    printf("Quantidade de pessoas ruivas e que não possuem olhos azuis: %d\n", contador_ruivas_sem_olhos_azuis);

    return 0;
}
