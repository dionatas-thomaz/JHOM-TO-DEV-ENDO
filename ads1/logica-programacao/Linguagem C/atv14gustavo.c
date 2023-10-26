#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
void insertion_sort(int *a)
{
    int i, j, tmp;

    for (i = 0; i < 36; i++)
    {
        tmp = a[i];
        for (j = i - 1; j >= 0 && tmp < a[j]; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = tmp;
    }
}
int main()
{

    int i;
    int vet[36];
    srand(time(NULL));
    int fim;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int cont1 = 0;
    int cont2 = 0;
    int cont3 = 0;
    do
    {

        for (i = 0; i < 36; i++)
        {
            vet[i] = rand() % 3 + 1;
        }
        insertion_sort(vet);
        for (i = 0; i < 36; i++)
        {
            printf("%d ", vet[i]);
        }
        printf("\ndeseja continuar: s/0 ");
        scanf("%d", &fim);
        if (fim == 0)

            break;

        fflush(stdin);
        for (i = 0; i < 36; i++)
        {

            if (vet[i] == num1 + 1)
            {
                cont1++;
            }
        }
        printf("\n ocorencia de quanto o 1 %d: %i vezes\n", num1, cont1);

        for (i = 0; i < 36; i++)
        {

            if (vet[i] == num2 + 2)
            {
                cont2++;
            }
        }
        printf("\n ocorencia de quanto o 2 %d: %i vezes\n", num2, cont2);

        for (i = 0; i < 36; i++)
        {

            if (vet[i] == num3 + 3)
            {
                cont3++;
            }
        }
        printf("\n ocorencia de quanto o 3 %d: %i vezes\n", num3, cont3);

        system("pause");
        system("cls");

    } while (fim != 0);
    printf("fim");

    return 0;
}