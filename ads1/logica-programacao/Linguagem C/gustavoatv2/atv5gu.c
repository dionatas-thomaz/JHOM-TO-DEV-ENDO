#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    
    int matriz[3][3], menor=0, maior=0,  aux_i=0, aux_j=0;
    for(size_t i=0; i<3; i++){
       for(size_t j=0; j<3; j++){
        printf("Informe um numero:\n");
        scanf("%d", &matriz[i][j]);
            printf("Matriz[%d][%d]: %d\n", i, j, matriz[i][j]);
        }
    }
    for (size_t i = 0; i < 3; i++){
        menor = matriz[i][0];
        for (size_t j = 0; j < 3; j++){
            if (matriz[i][j] < menor){
                menor = matriz[i][j];
                aux_j=j;
            }
        }
        maior = menor;
        for (size_t k = 0; k < 3; k++){
            if (matriz[k][aux_j] > maior){
                maior = matriz[k][aux_j];
                aux_i = k;
            }
        } 
        if (menor == maior){
            printf("Ponto de Sela : Matriz[%d][%d]: %d\n",aux_i, aux_j, matriz[aux_i][aux_j] );
        }
    }   
    return 0;
}