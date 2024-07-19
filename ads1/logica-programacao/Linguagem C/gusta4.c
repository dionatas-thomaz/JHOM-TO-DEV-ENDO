#include <stdio.h>
#include <time.h>
#define TAM 100


int main()

{
    int vetA[TAM],vetB[TAM],vetC[TAM],num,posi=0;
       srand(time(NULL));
   
    for (int i = 0; i <= TAM; i++)
    {

        vetA[i] = rand() % 100;
        vetB[i] = rand() % 100;
        
    }

    
    for (int i = 0; i <= TAM; i++)
    {
       vetC[i]=vetA[i]+vetB[i];
        
    }
    printf(" valor da terceira posiçao : %d",vetC[2]);
    return 0;
}