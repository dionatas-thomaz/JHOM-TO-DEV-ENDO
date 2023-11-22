#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, novosalario, salarioferiias, mesestrab, decimoter;
    char op;
    do
    {
        printf("\nescolha a opcao: \n[1] Novo salario\n[2] Ferias\n[3] Decimo terceiro\n[4] Sair\n");
        scanf("%c", &op);

        switch (op)
        {
        case '1':
            printf("digite seu salario:");
            scanf("%f", &salario);
            if (salario < 600)
            {
                novosalario = salario * 0.15;
                novosalario += salario;
            }
            else if (salario < 1200)
            {
                novosalario = salario * 0.10;
                novosalario += salario;
            }
            else
            {
                novosalario = salario * 0.05;
                novosalario += salario;
            }
            printf("seu novo salario sera: %.2f\n", novosalario);
            break;
        case '2':
            printf("digite seu salario:");
            scanf("%f", &salario);
            salarioferiias = salario / 3;
            salarioferiias += salario;
            printf("seu salario das ferias sera:%.2f\n", salarioferiias);
            break;
        case '3':
            printf("digite seu salario:");
            scanf("%f", &salario);
            printf("digite os meses trabalhados: ");
            scanf("%f", &mesestrab);
            if (mesestrab>12)
            {
                printf("\nvalor invalido!\n");
               break;
            }
            decimoter = (salario * mesestrab) / 12;
            printf("seu decimo terceiro sera: %.2f\n", decimoter);
            break;

        default:
            if (op != '4')
            {
                printf("\nopacoa invalida :/\n");
                break;
            }
        }
        setbuf(stdin, NULL);
        system("pause");
        system("cls");
    } while (op != '4');
    printf("\nfim do programa\n");
    return 0;
}