

#include <stdio.h>
#include <stdlib.h>

float calcularTinta(float altura, float largura, float comprimento)
{
    float tinta ;
    char op_tinta;
    printf("Escolha a opcao de tinta a ser usada:\nOpcao [1] R$22,00\nOpcao [2] R$47,00\n");
    scanf(" %c", &op_tinta);

    switch (op_tinta)
    {
    case '1':
        tinta = (altura * largura * comprimento * 2) * 22;
        break;
    case '2':
        tinta = (altura * largura * comprimento * 2) * 47;
        break;
    default:
        printf("Opcao de tinta invalida :/\n");
        break;
    }

    return tinta;
}

float calcularpiso(float largura, float comprimento)
{
    float piso ;
    char op_piso;
    printf("Escolha qual opcao de piso deseja usar:\nOpcao [1] R$24,00\nOpcao [2] R$31,00\nOpcao [3] R$55,00\n");
    scanf(" %c", &op_piso);

    switch (op_piso)
    {
    case '1':
        piso = largura * comprimento * 24;
        break;
    case '2':
        piso = largura * comprimento * 31;
        break;
    case '3':
        piso = largura * comprimento * 55;
        break;
    default:
        printf("Opcao de piso invalida :/\n");
        break;
    }
    return piso;
}

int main()
{
    float altura, largura, comprimento, piso, tinta;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite a largura: ");
    scanf("%f", &largura);

    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);

    piso = calcularpiso(altura, largura);
    tinta = calcularTinta(altura, largura, comprimento);

    printf("Valor a ser gasto com tintas: R$%.2f\n", tinta);
    printf("Valor a ser gasto com piso: R$%.2f\n", piso);

    return 0;
}
