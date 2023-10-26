#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

    char nome[10];
    int cont = 0;

    printf("digite o nome: ");
    scanf("%s", nome);

    for (size_t i = 0; i < strlen(nome); i++)
    {
        if (nome[i] == 'e'){
            cont++;
        }
    }
    printf("total de letra e %d",cont);
    return 0;
}