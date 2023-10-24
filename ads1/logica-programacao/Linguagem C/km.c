#include <stdio.h>
#include <stdlib.h>

int main()
{

    float  litr, prec;

    char op;

    printf("digite a quantidade de litros de gasolina: ");
    scanf("%f", &litr);

    printf("digite o preco da gasolina: ");
    scanf("%f", &prec);

    printf("escolha uma op : a , b , c :");
    scanf("%s", &op);

    switch (op)
    {
    case 'a':
        printf(" a distancia percorrida pelo carro a foi : %.f\n", 16 * litr);
        printf("o dinheiro gasto com gasolina foi : %.f", prec * litr);
        break;

    case 'b':
        printf(" a distancia percorrida pelo carro b foi : %.f\n", 12 * litr);
        printf("o dinheiro gasto com gasolina foi : %.f", prec * litr);
        break;

    case 'c':
        printf(" a distancia percorrida pelo carro c foi : %.f\n", 8 * litr);
        printf("o dinheiro gasto com gasolina foi : %.f", prec * litr);
        break;

    default:
        printf("opcao invalida :/");
        break;
    }
    return 0;
}