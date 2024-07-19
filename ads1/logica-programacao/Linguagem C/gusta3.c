
#include <stdio.h>
#include <time.h>
#define TAM 100


int main()

{
    int vet[TAM],num,posi=0;
       srand(time(NULL));
   
    for (int i = 0; i <= TAM; i++)
    {

        vet[i] = rand() % 100;
        
 printf("vetor[%d] : %d\n", i, vet[i]);
    }

    printf("escolha um numero: ");
    scanf("%d",&num);
    
    for (int i = 0; i <= TAM; i++)
    {
        if (num == vet[i])
        {
            posi=i;
            break;
        } 
        
    }
    printf(" sua posiçao : %d",posi);
    return 0;
}