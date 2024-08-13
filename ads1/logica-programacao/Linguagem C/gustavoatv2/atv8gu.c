#include <stdio.h>
#include  <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_DADOS 2

typedef struct{
    int idade[MAX_DADOS];
    float salario[MAX_DADOS];
    int numfilho[MAX_DADOS];
    char sexo[MAX_DADOS];
} Dados;

int main()
{
    Dados dados;
    float somasal,somafilho,maiorsal,p,m;

for (size_t i = 0; i < MAX_DADOS; i++){
    printf("digite sua idade: ");
    scanf("%d",& dados.idade[i]);
    setbuf(stdin, NULL);
    printf("digite seu salario: ");
    scanf("%f",&dados.salario[i]);
    setbuf(stdin, NULL);
    printf("digite o numero de filhos: ");
    scanf("%d",&dados.numfilho[i]);
    setbuf(stdin, NULL);
    printf("digite seu sexo M ou F: ");
    scanf("%c",&dados.sexo[i]);
    setbuf(stdin, NULL);
}
maiorsal=dados.salario[0];
 for (size_t i = 0; i < MAX_DADOS; i++){
    somasal+=dados.salario[i];
    somafilho+=dados.numfilho[i];

   if (dados.salario[i] > maiorsal){
    maiorsal=dados.salario[i];
   }
   if (tolower(dados.sexo[i])== 'f')
   {
    m++;
   }

   if (dados.salario[i]>1000 && tolower (dados.sexo[i])== 'f'){
   p++;
   }
   
}

printf("a mediad do salario da populaçao e: %.2f\n",somasal/MAX_DADOS);
printf("a media de filhos e: %.2f\n",somafilho/MAX_DADOS);
printf("percentual de mulheres: %.1f%%",(m/p)*100);


return 0;
}
