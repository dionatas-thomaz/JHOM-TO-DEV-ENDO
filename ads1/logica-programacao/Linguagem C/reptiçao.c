#include <stdio.h>
#include <stdlib.h>

int main (){

int n,senhaCorreta=2407;


do {
printf("digite a senha:");
scanf("%d", &n);

if (n!=senhaCorreta ){
    printf ("senha incorreta!!\n");
} 
system("pause");
system("cls");
}while (n!=senhaCorreta);
printf ("senha correta: \n");

   printf("inicializando");


return 0;

}