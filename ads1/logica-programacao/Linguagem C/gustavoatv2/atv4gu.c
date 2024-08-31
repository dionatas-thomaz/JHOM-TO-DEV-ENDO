#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
 //      L  C  
int vet[3][4],par=0,somaipa=0,soma=0;
    float media=0;

    srand(time(NULL));
for (int i = 0; i < 3; i++) {
   for (int j = 0; j <4; j++) {
       
       vet[i][j] = rand() % 10;
       
      if(vet[i][j]%2==0){
          par++;
      }
         if(vet[i][j]%2!=0){
         somaipa+=vet[i][j];
      }
     soma+=vet[i][j];
      
   }
}
 printf("quantidade de numeros pares: %d\n",par);
 printf("a soma de todos o numeros impares: %d\n",somaipa);
 printf("a media de todos os elementos: %.2f",media = soma /12);
    return 0;
}