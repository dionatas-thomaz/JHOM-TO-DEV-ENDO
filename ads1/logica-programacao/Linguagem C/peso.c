/*A nota final de um estudante do curso ADS é calculada a partir de três notas atribuídas, respectivamente, a um trabalho
de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas obedece aos pesos
a seguir: peso 2 , peso 3 e peso 5*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float vetor[3], media = 0, peso = 2;

    for (size_t i = 0; i < 3; i++)
    {
        printf("digite a primeira nota: ");
        scanf("%f", &vetor[i]);

        media += (vetor[i] / 10) * peso;
        peso++;
        if (peso == 4)
        {
            peso++;
        }
    }
    printf("media:%.2f\n", media);
    printf("fim de linha");
    return 0;
}