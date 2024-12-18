#include <stdio.h>
#define MAX 100

int pilha[MAX];
int topo = -1;

void push(int valor) {
    if (topo < MAX - 1) {
        pilha[++topo] = valor;
    }
}

int pop() {
    if (topo >= 0) {
        return pilha[topo--];
    }
    return -1;
}

int peek() {
    if (topo >= 0) {
        return pilha[topo];
    }
    return -1;
}

int isEmptyPilha() {
    return topo == -1;
}

int isFullPilha() {
    return topo == MAX - 1;
}

int main() {
    push(10);
    push(20);
    printf("%d\n", pop());
    printf("%d\n", peek());
    return 0;
}
