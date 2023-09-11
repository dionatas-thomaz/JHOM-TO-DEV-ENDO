#include <stdio.h>
#include <stdlib.h>

int main() {
    int mat[5][7];
    int k = 1;

    for (size_t i = 0; i < 5; i++)
        for (size_t j = 0; j < 7; j++)
            mat[i][j] = 0;

    for (size_t i = 0; i < 5; i++)
        for (size_t j = 0; j < 7; j++)
            if (k <= 31) {
                mat[i][j] = k;
                k++;
            }

    for (size_t i = 0; i < 5; i++)
        for (size_t j = 0; j < 7; j++) {
            if (i <= 4 && mat[i][j] != 0) {
                printf("%.2d ", mat[i][j]);
                if (j == 6)
                    printf("\n");
            }
        }

    return 0;
}