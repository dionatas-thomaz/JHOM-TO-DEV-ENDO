#include <stdio.h>

int main() {
    // Declaração das variáveis
    int N;
    double S = 0.0;

    // Solicita o valor de N ao usuário
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    // Calcula o valor da série
    for (int i = 1; i <= N; i++) {
        S += 1.0 / (i * i);
    }

    // Exibe o resultado
    printf("O valor da série S é: %.6lf\n", S);

    return 0;
}
