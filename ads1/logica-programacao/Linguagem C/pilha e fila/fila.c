#include <stdio.h>
#define MAX 100

int fila[MAX];
int frente = 0;
int tras = -1;
int tamanho = 0;

void enqueue(int valor) {
    if (tamanho < MAX) {
        tras = (tras + 1) % MAX;
        fila[tras] = valor;
        tamanho++;
    }
}

int dequeue() {
    if (tamanho > 0) {
        int valor = fila[frente];
        frente = (frente + 1) % MAX;
        tamanho--;
        return valor;
    }
    return -1;
}

int front() {
    if (tamanho > 0) {
        return fila[frente];
    }
    return -1;
}

int isEmptyFila() {
    return tamanho == 0;
}

int isFullFila() {
    return tamanho == MAX;
}

int main() {
    enqueue(10);
    enqueue(20);
    printf("%d\n", dequeue());
    printf("%d\n", front());
    return 0;
}
