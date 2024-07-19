
#include <stdio.h>
#include <time.h>
#define TAM 6

int main()

{
    int A[TAM];
    int impar, cont1 = 0, cont2 = 0, j = 0;
    srand(time(NULL));
    // preenchendo os vetores
    for (int i = 0; i < TAM; i++){
        
        A[i] = rand() % 100;
        printf("vetor[%d] numeors imprimidos: %d\n", i, A[i]);
    }
    // pegando os numeros pares e impares
    for (int i = 0; i < TAM; i++){

        if (A[i] % 2 == 0){
            printf("%d: %d e par\n", i, A[i]);
        }
        else{
            impar++;
        }
    }
    printf("quantidade de numeros impares: %d\n", impar);
    // pegando os numeros primos
    for (int i = 0; i < TAM; i++){
        for (j = 1; j <= A[i]; j++) {

            if (A[i] % j == 0){
                cont1++;
            }
        }
        if (cont1 == 2) {
            printf(" %d e um numero primo\n", A[i]);
        }
        cont1 = 0;
        // pegando os numeros divisiveis por 3
        if (A[i] % 3 == 0){
            cont2++;
        }
    }
    printf("quantidade de numeros divisiveis por 3 e : %d", cont2);

    return 0;
}