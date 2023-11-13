#include <stdio.h>
#include <stdlib.h>

#define MAX 2

typedef struct {    
    char corOlhos[50], corCabelo[50];
    int idade;
    float peso,altura;    
} pessoa;

int main() {
    float idade = 0, idadeM = 0, media = 0, azul = 0, ruivas = 0;
    pessoa p[MAX];

    for (size_t i = 0; i < MAX; i++) {
        printf("\nIdade: ");
        scanf("%d",&p[i].idade);        
        printf("Peso: ");
        scanf("%f",&p[i].peso);
        printf("Altura: ");
        scanf("%f",&p[i].altura);
        printf("Cor dos olhos: ");
        scanf("%s",&p[i].corOlhos);
        printf("Cor dos cabelos: ");
        scanf("%s",&p[i].corCabelo);
    }


    for (size_t i = 0; i < MAX; i++) {
        printf("\nIdade: %d\n",p[i].idade);        
        printf("Peso: %.2f\n",p[i].peso);        
        printf("Altura: %.2f\n",p[i].altura);        
        printf("Cor dos olhos: %s\n",p[i].corOlhos);        
        printf("Cor dos cabelos: %s\n",p[i].corCabelo);        

        if (p[i].idade > 50 && p[i].peso < 60){
           
        }
        if (p[i].altura < 1.50)
        {
           
        }        
        if (strcmp(p[i].corOlhos, "azul")==0){            

        }
        else if (strcmp(p[i].corCabelo, "ruivo")==0){            
        
        }
        
    }
    

    return 0;
}