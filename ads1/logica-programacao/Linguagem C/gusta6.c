#include <stdio.h>
#define TAM 10


int main()

{
    int A[TAM],B[TAM],j=1;

   
    for (int i = 0; i < TAM; i++)
    {

        A[i] = j;
        j++;
printf("vetor a [%d] \n",A[i]);
    }
    
    for (int i = 0; i < TAM; i++)
    {
        if(A[i] % 2 == 0){
            B[i]=A[i]/2;
            printf("\nvetor a [%d] / 2 = %d",A[i],B[i]);
        }
        else{
            
            B[i]=A[i]*3;
            printf("\nvetor a [%d] x 3 = %d",A[i],B[i]);
        }
         
    }
    return 0;
}