#include <stdio.h>
#include <stadlib.h>


typedef struct no{ 
    int valor;
    struct no *proximo;   
}No;
//inicio
void inserir_no_inicio(No **lista,int num){ 
No *novo = malloc(sizeof(No));
if (novo){
   novo->valor= num;
   novo->proximo= *lista;
   *lista = novo;
}else
printf("erro ao alocar\n");
}

//fim



int main (){

return 0;
}