#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int b[1];
    int a, i;
    int cont = 0;
    srand(time(NULL));

    printf("\nchuete um palpite de 1 a 10: ");
    scanf("%d", &a);
    do
    {
        for (i = 0; i < 1; i++)

            b[i] = rand() % 10 + 1;

        for (i = 0; i < 1; i++)

            printf("numero gerado: %d\n ", b[i]);

        if (a > b[0])

            printf("chute alto\n");

        else if (a < b[0])

            printf("chute baixo\n");

        else 
        {
            printf("acertou\n");
            break;
        }
        
        for (i = 0; i <1; i++)
        {

            if (b[i] !=a )
            {
                cont++;
            }
            printf("\ntentativas: %d\n", cont);
        }
    } while (a != b);

    return 0;
}
