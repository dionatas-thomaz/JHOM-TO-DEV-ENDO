#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Digite a quantidade de termos : ");
    scanf("%d", &n);
    int vet[n];
    printf("digite o primeiro termo:");
    scanf("%d", &vet[1]);
    printf("digite o segundo termo:");
    scanf("%d", &vet[2]);

    printf("\nA sequencia de termos e: \n");
    for (i = 3; i < n; i++){
        if (i % 2 == 0) {
           vet[i] = vet[i-1] - vet[i-2];
            printf("%d\n", vet[i]); 
        }
        else {
           vet[i] = vet[i-1] + vet[i-2];
            printf("%d\n", vet[i]);
        }
    }
   return 0;
}