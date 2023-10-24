#include <stdio.h>
#include <stdlib.h>

int main (){

int a ,b ,c;

printf("digite o primeiro digito: ");
scanf("%d",&a);
printf("digite o segundo2 digito: ");
scanf("%d",&b);
printf("digite o terceiro digito: ");
scanf("%d",&c);

int invert= (a*100 + b*10 + c ) + (c*100+b*10+a);
int posi = ((a+c)*1)+((b+b)*2) + ((c+a)*3);
int veri = posi%10;
printf(" inversao soma: %d\n",invert);
printf(" iposicao: %d\n",posi);
printf(" numero verificador: %d\n",veri);

    return 0;
}