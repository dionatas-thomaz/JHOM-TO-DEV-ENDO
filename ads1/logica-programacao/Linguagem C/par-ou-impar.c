#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a ;

    printf("digite um numero: ");
    scanf("%d", &a);

    if (a%2==0)
    
        printf("par");
    
    else
        printf("impar");

    return 0;
}