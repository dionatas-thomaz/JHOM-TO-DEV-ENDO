#include <stdio.h>

int main(){
    int a,b;

    printf("digite o numero de acidentes ou numero de dias perdidos:\n");
    scanf("%d", &a);
    printf(" digite as hht:\n");
    scanf("%d", &b);

    printf(" a taxa de f/g e:%d", (a*1000000)/b);

    return 0;
}