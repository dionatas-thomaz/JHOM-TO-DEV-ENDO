#include <stdio.h>
#include <time.h>
#define TAM 15

 
 char *Nomes[]={"Ana","Bruno","Carlos","Daniela","Eduardo","Fernanda","Gabriel","Helena","Igor","Juliana","Lucas","Mariana","Nuno","Olivia","Pedro"};

int main(){
    
 
  
    int Prova1[TAM],Prova2[TAM];
   float media[TAM];
    srand(time(NULL));
    
    for (int i = 0; i < TAM; i++) {
        Prova1[i] = rand() % 10;
        Prova2[i] = rand() % 10;
    }
     for (int i = 0; i <= TAM; i++){
         
         media[i]= (Prova1[i]+Prova2[2])/2;
         
     }
     for (int i = 0; i <= TAM; i++){
         if(media[i]>=6){
             printf("aluno:%s\n nota da primeira prova: %d\n nota da segunda prova: %d\n media:%.2f situa��o: aprovado\n",Nomes[i],Prova1[i],Prova2[i],media[i]);
         }else{
              printf("aluno:%s\n nota da primeira prova: %d\n nota da segunda prova: %d\n media:%.2f situa��o: reprovado\n",Nomes[i],Prova1[i],Prova2[i],media[i]);
         }
     }
     
   
    return 0;
}