#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a = 16, b = 12, c = 8, litr, prec;

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
        printf(" a distancia percorrida pelo carro a foi : %.f\n", a * litr);
        printf("o dinheiro gasto com gasolina foi : %.f", prec * litr);
        break;

    case 'b':
        printf(" a distancia percorrida pelo carro b foi : %.f\n", b * litr);
        printf("o dinheiro gasto com gasolina foi : %.f", prec * litr);
        break;

    case 'c':
        printf(" a distancia percorrida pelo carro c foi : %.f\n", c * litr);
        printf("o dinheiro gasto com gasolina foi : %.f", prec * litr);
        break;

    default:
        printf("opcao invalida :/");
        break;
    }
    return 0;
}