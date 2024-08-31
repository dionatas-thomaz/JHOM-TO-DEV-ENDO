#include <stdio.h>
#include <stdlib.h>
#define TAM 1

char *Nomes[];
int main (){

//char vendendores[10][10];
//int vendas [TAM];
//float percebtual[TAM];

for (size_t i = 0; i < 2; i++)
{
    printf("digiete o nome do vendedor: ");
fgets(Nomes, sizeof(Nomes[i]), stdin);
}


for (size_t i = 0; i < 2; i++)
{
    printf("nome do vendedor: %s\n", Nomes[i]);
}
    return 0;

}