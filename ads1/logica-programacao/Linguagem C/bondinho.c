/*A turma do colégio vai fazer uma excursão na serra e todos os alunos e monitores vão tomar um bondinho para subir até o pico de uma montanha.
A cabine do bondinho pode levar 50 pessoas no máximo, contando alunos e monitores, durante uma viagem até o pico.Neste problema, dado como entrada
o número de alunos A e o número de monitores M, você deve escrever um programa que diga se é possível ou não levar todos os alunos e monitores em apenas uma viagem*/

#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a, m, c;

    printf("numero de alunos: ");
    scanf("%d", &a);
    printf("digite o numero de monitores: ");
    scanf("%d", &m);

    c = a + m;
    if (c < 50)
        printf("uma viagem");
    else
        printf("duas viagens");
    return 0;
}