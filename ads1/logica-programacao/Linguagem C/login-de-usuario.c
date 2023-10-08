
#include <stdio.h>

int main()
{
    char b[15];
    int a = 2407;
    int c;
    do
    {
        printf("\nproseguindo digite a sua senha:\n");
        scanf("%d", &c);

        if (a == c){
            printf("digite o seu nome de cadastro: ");
            scanf("%s", &b);
            break;
        }
        else
        
            printf("\nsenha incorreta!!\n");
        

    } while (a = !0);

    return 0;
}