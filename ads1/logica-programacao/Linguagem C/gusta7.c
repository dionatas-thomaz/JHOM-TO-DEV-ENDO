#include <stdio.h>
#include <time.h>
#define TAM 15


int main()

{
    int A[TAM];
    
       srand(time(NULL));
   
    for (int i = 0; i < TAM; i++)
    {
        A[i] = rand() % 100;
    }

    for (int i = 0; i < TAM; i++)
    {
        if(A[i] % 2 ==0 ){
           printf("%d: %d e par\n",i,A[i]);
        }else{
            printf("%d: %d e impar\n",i,A[i]);
        }
        
    }
    
    return 0;
}