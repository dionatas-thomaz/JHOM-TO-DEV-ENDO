#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>




int main(){
 setlocale(LC_ALL,"pt_BR.UTF-8");

    printf ("************************************************************************************************************************\n");
    printf ("                                       INSTITUTO FEDERAL DO TRIANGULO MINEIRO - IFTM");
    printf ("\n                                                     CAMPUS PARACATU");
    printf ("\n                                               Algoritmos e Programacao - ADS\n");
    printf (" PROFESSOR: Tiago Ismailer de Carvalho.\n");
    printf (" ALUNOS: Eriky Gomes.\n");
    printf ("************************************************************************************************************************\n\n");
    printf ("                                              Lista 01 - ADS \n\n");
    printf ("========================================================================================================================\n");
 

    int list;
    printf("Escolha o exercicio a ser utilizado pelo seu respectivo numero:\n\n");
    printf("(1) Soma entre dois numeros.\n");
    printf("(2) Area do quadrado.\n");
    printf("(3) Area do circulo.\n");
    printf("(4) Soma de notas (APROVADO ou REPORVADO).\n");
    printf("(5) Entrada de Boate.\n");
    printf("(6) Programa para saber se o numero e impar ou par.\n");
    printf("(7) Calculadora.\n");
    printf("(9) Calculadora.\n");
    scanf("%d", &list);


    // Para solucionar o erro da declaração das variaveis dentro da case, decidi colocar fora da case, e modificar o nome para "Var_Exercicio".
    
    int num1_1,num2_1,soma_1;
    float l_2;
    float raio_3, area_3;
    float nota1_4,nota2_4,total_4; char nome_4[10];
    int idade_5;
    int num_6;
    char operador_7; float n1_7, n2_7, result_7;
    

    switch (list)
    {
        case 1:
            printf("Informe dois numeros: (Use a tecla Enter para confirmar cada numero)\n");
            scanf("%d %d", &num1_1, &num2_1);
            soma_1=num1_1+num2_1;
            printf("A soma dos numeros informados e %d.", soma_1);
        break;

        case 2:
            printf("Informe o lado do quadrado para calcular sua area:\n");
            scanf("%f", &l_2);
            printf("A area do seu quadrado e %.2f.", l_2*l_2);
        break;

        case 3:
            printf("Informe o raio do circulo para calcular sua area:\n");
            scanf("%f", &raio_3);
            area_3=3.14*(raio_3*raio_3);
            printf("A area do seu circulo e %.2f.",area_3);
        break;

         case 4:
            printf("Informe duas notas: (Use a tecla Enter para confirmar cada numero)\n");
            scanf("%f %f", &nota1_4, &nota2_4);
            getchar();
            printf("Informe o nome do aluno:\n");
            scanf("%s", &nome_4);
            total_4=nota1_4+nota2_4;
            
            if (total_4>=60)
            {
                printf("%s nota total %.2f. Aprovado.", nome_4, total_4);
            }
            else{
                printf("%s nota total %.2f. Reprovado.", nome_4, total_4);
            }
        break;

        case 5:
            printf("Qual sua idade?\n");
            scanf("%d", &idade_5);
            if (idade_5>=18)
            {
                printf("TRUE - Pode entrar.");
            }
            else{
                printf("FALSE - barrado no baile.");
            }
        break;

         case 6:
            printf("Iforme um numero.\n");
            scanf("%d", &num_6);
            if (num_6 % 2 ==0)
            {
                printf("Seu numero e par");
            }
            else{
                printf("Seu numero e impar");
            }
        break;

        case 7:
            printf("Informe dois numeros: (Use a tecla Enter para confirmar cada numero)\n");
            scanf("%f %f", &n1_7, &n2_7);
            getchar();
            printf("Digite o operador (+, -, *, /): ");
            scanf("%s" ,&operador_7);

                switch (operador_7)
                {
                case '+':
                    result_7=n1_7+n2_7;
                    printf("Resultado: %.2f\n", result_7);
                    break;
                case '-':
                    result_7=n1_7-n2_7;
                    printf("Resultado: %.2f\n", result_7);
                    break;
                case '*':
                    result_7=n1_7*n2_7;
                    printf("Resultado: %.2f\n", result_7);
                    break;
                case ' /':
                    result_7=n1_7 /n2_7;
                    printf("Resultado: %.2f\n", result_7);
                    break;


                default:
                    printf("Operaador invalida!\n");
                    break;
                }
        break;

        case 8:
            printf("Iforme um numero.\n");
            scanf("%d", &num_6);
            if (num_6 % 2 ==0)
            {
                printf("Seu numero e par");
            }
            else{
                printf("Seu numero e impar");
            }
        break;
        case 9:
        printf("Limpar\n");
        system ("cls");
        break;



    default:
           printf("Opcacao invalida!\n");
       
        break;
    }
    
    return 0;
}