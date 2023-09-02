#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){

int idade;

float salario;

char nome[50];

char sobrenome[50];


    setlocale(LC_ALL, "portuguese");

    printf("digite sua idade:");
    scanf("%i",&idade);

    printf("seu salario:");
    scanf("%f",&salario);

    printf("seu nome:");
    scanf("%s",&nome);

    printf("sobrenome:");
    scanf("%s",sobrenome);

    printf("os dados informados são:%i %.2f %s %s\n",idade,salario,nome,sobrenome);
    system("pause");
    system("cls");

    return 0;
}
