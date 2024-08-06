
#include <stdio.h>
#include <time.h>
#define TAM 6

int main()

{
    int A[TAM];
    int cont1 = 0, cont2 = 0, j = 0;
    srand(time(NULL));
    // preenchendo os vetores
    for (int i = 0; i < TAM; i++){
        
        A[i] = rand() % 100;
        printf("vetor[%d] numeors imprimidos: %d\n", i, A[i]);
        if (A[i] % 2 == 0){
            printf("%d: %d e par\n", i, A[i]);
            cont1 ++;
        }
    }
   
    for (int i = 0; i < TAM; i++)
    {
         if (A[i] %2 == !0){
            printf("%d: %d e impar\n", i, A[i]);
            cont2++;
        }
    }
    

    printf("quantidade de numeros pares: %d \n",cont1);
    printf("quantidade de numeros impares: %d ",cont2);
    
  

    return 0;
}