#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM_i 4
#define TAM_j 7
int main()
{
    int matriz[TAM_i][TAM_j], MINMAX, menor=100, aux_i, aux_j, i=0;
    for(size_t i=0; i<TAM_i; i++){
        for(size_t j=0; j<TAM_j; j++){
            printf("Informe um numero:\n");
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
                aux_i= i;
                aux_j=j;
            }
        }
    }
    printf("Menor valor da Matriz: Matriz[%d][%d]= %d\n", aux_i, aux_j, menor);
    for(size_t j=0; j<TAM_j; j++){
        if(matriz[aux_i][aux_j]< matriz[aux_i][j]){
            MINMAX = matriz[aux_i][j];
            i=aux_i;
            aux_j = j;
        }
    }
    printf("MINMAX: %d\nPosicao Matriz[%d][%d].\n", MINMAX ,i,aux_j);
    return 0;
}
