#include <stdio.h>

int main(){

int op;

printf("1 2 3 ou 4 ,escolha uma opcao :\n");
scanf("%d",& op);

switch (op)
{
case 1:
printf("papel\n" );
break;
case 2:
printf("tesoura\n");
break;
case 3:
printf("cola\n");
break;
case 4:
printf("caneta\n"); 
break; 
default:
printf ("erro");
break;
}

    return 0;
}