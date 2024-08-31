#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
 //      L  C  
int vet[3][3],maior, menor;
    srand(time(NULL));
    maior=vet[0][0];
     menor=vet[0][0];
    
for (int i = 0; i < 3; i++) {
   for (int j = 0; j <3; j++) {
       
       vet[i][j] = 1+ rand() % 100;
       printf("valores vet: %d\n",vet[i][j]);
      if(vet[i][j] > maior){
           maior=vet[i][j];
      }
       if(vet[i][j] < menor){
           menor=vet[i][j];
      }
      
   }
}
printf("maior numero: %d\n",maior);
printf("menor numero: %d",menor);
    return 0;
}
