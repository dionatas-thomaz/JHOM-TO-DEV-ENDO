/*1. Faça um algoritmo que receba 4 números e mostre o menor.*/

#include <stdio.h>
#include <stdlib.h> //Elisa mt chata

int main()
{

    int i,  menor = 0, vetor[4];
    menor = vetor[0];

    for (i = 0; i < 4; i++)
    {
        printf("INSIRA O DADO: ");
        scanf("%d", &vetor[i]);
        

        if (menor > vetor[i])
        {
            menor = vetor[i];

        }
       /* printf("\ndado vetor: %d\n",vetor[i]);*/
       
    }
 printf("\ndado do menor: %d\n", menor);
    return 0;
}