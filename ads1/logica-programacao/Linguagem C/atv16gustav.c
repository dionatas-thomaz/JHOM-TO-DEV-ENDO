#include <stdio.h>
#include <stdlib.h>
int a1(int num1){
    num1 -= 1;
    return num1;
}
int a2(int num2){
    num2 -= 2;
    return num2;
}
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
    for (i = 3; i <= n; i++){
        if (i % 2 == 0) {
           vet[i] = vet[a1(i)] - vet[a2(i)];
            printf("%d\n", vet[i]); 
        }
        else {
           vet[i] = vet[a1(i)] + vet[a2(i)];
            printf("%d\n", vet[i]);
        }
    }
   return 0;
}