#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char corOlhos[50], corCabelo[50];
    int idade;
    float peso, altura;
} pessoa;

int main()
{
    float MAX=0,idadee = 0, idadeM = 0, media = 0,result=0, azul = 0, ruivas = 0;
    pessoa p;

    while (p.idade!=0)
    {
        
        printf("\nIdade:\n ");
        scanf("%d", &p.idade);
        if (p.idade==0){
            break;}
        printf("Peso:\n ");
        scanf("%f", &p.peso);
        printf("Altura: ");
        scanf("%f", &p.altura);
        printf("azul\npreto\nverde\ncastanho\nCor dos olhos:");
        scanf("%s", p.corOlhos);
        printf("preto\ncastanho\nlouro\nruivo\nCor dos cabelos:\n ");
        scanf("%s", p.corCabelo);
        MAX++;

        if (p.idade > 50 && p.peso < 60)
        {
            idadee++;
        }
        if (p.altura < 1.50)
        {
            media++;
            idadeM += p.idade;
            result=idadeM / media;
        }
        if (strcmp(p.corOlhos, "azul") == 0)
        {
            azul++;
        }
        if (strcmp(p.corCabelo, "ruivo") == 0 && strcmp(p.corOlhos, "azul") != 0)
        {
            ruivas++;
        }
    }

    printf("Quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg: %.f\n", idadee);
    printf("Media das idades das pessoas com altura inferior a 1,50 m: %.2f\n", result);
    printf("Porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas: %.2f%%\n", (azul / MAX) * 100);
    printf("Quantidade de pessoas ruivas e que nao possuem olhos azuis: %.f\n", ruivas);

    return 0;
}
