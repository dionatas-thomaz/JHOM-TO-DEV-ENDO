#include <stdio.h>
#include <time.h>
#define TAM 15

 
 char *Nomes[]={"Ana","Bruno","Carlos","Daniela","Eduardo","Fernanda","Gabriel","Helena","Igor","Juliana","Lucas","Mariana","Nuno","Olivia","Pedro"};

int main(){
    
 
  
    
   float media[TAM],Prova1[TAM],Prova2[TAM];
    srand(time(NULL));
    
    for (int i = 0; i < TAM; i++) {
        Prova1[i] = rand() % 10;
        Prova2[i] = rand() % 10;
    //     printf("vetor[%d] prova 1: %d e prova 2: %d\n", i,Prova1[i],Prova2[i] );
    }
     for (int i = 0; i <= TAM; i++){
         
         media[i]= (Prova1[i]+Prova2[i])/2;
         
     }
     for (int i = 0; i <= TAM; i++){
         if(media[i]>=6){
             printf("aluno:%s\n nota da primeira prova: %.2f\n nota da segunda prova: %.2f\n media:%.2f situação: aprovado\n",Nomes[i],Prova1[i],Prova2[i],media[i]);
         }else{
              printf("aluno:%s\n nota da primeira prova: %.2f\n nota da segunda prova: %.2f\n media:%.2f situação: reprovado\n",Nomes[i],Prova1[i],Prova2[i],media[i]);
         }
     }
     
   
    return 0;
}