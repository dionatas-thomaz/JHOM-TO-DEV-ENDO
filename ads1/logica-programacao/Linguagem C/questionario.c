#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAM 2

int main()
{
    char questionario[TAM][2];
    int numRespSim = 0, numRespNao = 0, mulherRespSim = 0, qtdHomemNao = 0, qtdTotalHomem = 0;

    for (size_t i = 0; i < TAM; i++)
    {
        printf("Participante %d\n", i + 1);
        printf("Digite o Sexo: ");
        scanf("%c", &questionario[i][0]);
        setbuf(stdin, NULL);
        printf("Voce gostou do produto ? [S/n]: ");
        scanf("%c", &questionario[i][1]);
        setbuf(stdin, NULL);
    }

    for (size_t i = 0; i < TAM; i++)
    { 
        if (tolower(questionario[i][1]) == 's')
            numRespSim++;

        else
            numRespNao++;

        if (tolower(questionario[i][1]) == 's' && tolower(questionario[i][0]) == 'f')
            mulherRespSim++;

        if (tolower(questionario[i][0]) == 'm' && tolower(questionario[i][1]) == 'n')
            qtdHomemNao++;

        if (tolower(questionario[i][0]) == 'm')
            qtdTotalHomem++;
    }

    printf("Quantidade de Pessoas que Gostaram do Produto: %d\n", numRespSim);
    printf("Quantidade de Pessoas que nao Gostaram do Produto: %d\n", numRespNao);
    printf("Quantidade de Mulheres que Gostaram do Produto: %d\n", mulherRespSim);
    printf("Percentual de Homens que Responderam nao: %.2f%%\n", ((qtdHomemNao/((float)qtdTotalHomem))) *100);

    return 0;
}