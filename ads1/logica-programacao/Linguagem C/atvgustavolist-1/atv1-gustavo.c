/*A nota final de um estudante do curso ADS é calculada a partir de três notas atribuídas, respectivamente, a um trabalho
de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas obedece aos pesos
a seguir: peso 2 , peso 3 e peso 5*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[3], media = 0, peso[3]={2,3,5};

    for (size_t i = 0; i < 3; i++)
    {
        printf("digite a primeira nota: ");
        scanf("%f", &vetor[i]);
        media += (vetor[i] / 10) * peso[i];
    }
    printf("a media e : %.2f\n",media);

    if (media >= 8)
        printf("nota A");
    else if (media >= 7)
        printf("nota B");
    else if (media >= 6)
        printf("nota C");
    else if (media >= 5)
        printf("nota D");
    else if (media >= 4)
        printf("nota E");

    return 0;
}