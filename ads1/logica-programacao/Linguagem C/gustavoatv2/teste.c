#include <stdio.h>
#include <string.h>

#define MAX_EVENTOS 100
#define FILENAME "eventos.txt"

// Defini��es das estruturas Bebida e Evento
typedef struct {
    char nome[50];
    float teor_alcoolico;
    float valor_unitario;
} Bebida;

typedef struct {
    int id;
    char nome[100];
    char local[100];
    char data[11]; // formato: DD/MM/YYYY
    float custo_organizacao;
    int max_ingressos;
    float valor_entrada_basica;
    float valor_entrada_normal;
    float valor_entrada_especial;
    int ingressos_vendidos_basica;
    int ingressos_vendidos_normal;
    int ingressos_vendidos_especial;
    int open_bar;
    Bebida bebidas[3];
} Evento;

Evento eventos[MAX_EVENTOS];
int total_eventos = 0;

// Fun��es de salvar e carregar eventos, e outras opera��es
void salvar_eventos() { /* ... c�digo como mostrado antes ... */ }
void carregar_eventos() { /* ... c�digo como mostrado antes ... */ }
void cadastrar_evento() { /* ... c�digo como mostrado antes ... */ }
void pesquisar_evento() { /* ... c�digo como mostrado antes ... */ }
// Outras fun��es como ingressos_vendidos, exibir_resultado_evento, exibir_resultado_geral etc.

int main() {
    int opcao;

    // Carregar eventos do arquivo ao iniciar o programa
    carregar_eventos();

    do {
        // Exibe o menu de op��es
        printf("\nMenu de Op��es:\n");
        printf("1 � Cadastrar evento\n");
        printf("2 � Pesquisar evento\n");
        printf("3 � Ingressos vendidos\n");
        printf("4 � Exibir resultado por evento\n");
        printf("5 � Exibir resultado geral\n");
        printf("6 � Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                cadastrar_evento();
                break;
            case 2:
                pesquisar_evento();
                break;
            case 3:
                // Fun��o de ingressos vendidos aqui
                break;
            case 4:
                // Fun��o de exibir resultado por evento aqui
                break;
            case 5:
                // Fun��o de exibir resultado geral aqui
                break;
            case 6:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Op��o inv�lida. Tente novamente.\n");
        }
    } while(opcao != 6);

    return 0;
}
